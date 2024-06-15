#pragma once
#include "Enemigo.h"
class Enemigo3 : public Enemigo {
private:
public:
	Enemigo3(int x_e3, int y_e3, System::Drawing::Bitmap^ img) {
		x = x_e3;
		y = y_e3;
		if (rand() % 2 == 0) {
			dx = rand() % 10 - 5;
			if (dx == 0)
				dx = 5;
		}
		else
		{
			dy = rand() % 10 - 5;
			if (dy == 0)
				dy = 5;
		}
		ancho = img->Width / 27;//Cantidad de fotogramas horizontales
		alto = img->Height / 5;//Cantidad de fotogramas verticales
	};
	void eMostrar3(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
	{
		System::Drawing::Rectangle corte = System::Drawing::Rectangle(IDx * ancho, movimiento * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, System::Drawing::GraphicsUnit::Pixel);
		//g->DrawRectangle(Pens::Black, Area());

		if (movimiento >= eCaminarDerecha && movimiento <= eCaminarAbajo)
			// Cantidad de fotogramas en la imagen
			// Cantidad regular: 9
			// Fotogramas en "testing2_32_alt2": 27
			IDx = (IDx + 1) % 27;
		else if (movimiento == eEliminado)
			// Cantidad de fotogramas en la imagen
			// Cantidad regular: 9
			// Fotogramas en "testing2_32_alt2": 27
			IDx = IDx + 1 % 27;
	}
	void eMover3(System::Drawing::Graphics^ g)
	{
		if (!(x + dx >= 0 && x + ancho + dx < g->VisibleClipBounds.Width)) {
			dx *= -1;
		}
		if (!(y + dy >= 0 && y + alto + dy < g->VisibleClipBounds.Height)) {
			dy *= -1;
		}

		if (dx < 0) {
			movimiento = eCaminarIzquierda;
		}
		else if (dx > 0) {
			movimiento = eCaminarDerecha;
		}
		else if (dy < 0) {
			movimiento = eCaminarArriba;
		}
		else if (dy > 0) {
			movimiento = eCaminarAbajo;
		}

		x += dx;
		y += dy;
	}
};
class Enemigos3
{
	vector<Enemigo3*> enemigos3;
private:

public:
	Enemigos3(int x_e3, int y_e3, System::Drawing::Bitmap^ img, int cant) {
		for (int i = 0; i < cant; i++) {
			enemigos3.push_back(new Enemigo3(x_e3, y_e3, img));
		}
	};
	~Enemigos3() {
		for each (Enemigo3 * E3 in enemigos3) {
			delete E3;
		}
	};
	bool eColision3(System::Drawing::Rectangle obj) {
		for each (Enemigo3 * E3 in enemigos3) {
			if (E3->NextArea().IntersectsWith(obj))
				return true;
		}
		return false;
	}
	void mover(System::Drawing::Graphics^ g) {
		for each (Enemigo3 * E3 in enemigos3)
			E3->eMover3(g);
	}
	void mostrar(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img) {
		for each (Enemigo3 * E3 in enemigos3)
			E3->eMostrar3(g, img);
	}
};