#pragma once
#include "Enemigo.h"
class Enemigo1 : public Enemigo {
private:
public:
	Enemigo1(int x_e1, int y_e1, System::Drawing::Bitmap^ img) {
		x = x_e1;
		y = y_e1;
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
	void eMostrar1(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
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
	void eMover1(int x_j, int y_j, System::Drawing::Graphics^ g)
	{
		int Cdx = 0, Cdy = 0;

		if (x <= x_j && y <= y_j) {
			Cdx = dx; Cdy = dy;
		}

		else if (x <= x_j && y >= y_j) {
			Cdx = dx; Cdy = -dy;
		}

		else if (x >= x_j && y <= y_j) {
			Cdx = -dx; Cdy = dy;
		}

		else if (x >= x_j && y >= y_j) {
			Cdx = -dx; Cdy = -dy;
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

		x += Cdx;
		y += Cdy;
	}
};
class Enemigos1
{
	vector<Enemigo1*> enemigos1;
private:

public:
	Enemigos1(int x_e1, int y_e1, System::Drawing::Bitmap^ img, int cant) {
		for (int i = 0; i < cant; i++) {
			enemigos1.push_back(new Enemigo1(x_e1, y_e1, img));
		}
	};
	~Enemigos1() {
		for each (Enemigo1 * E1 in enemigos1) {
			delete E1;
		}
	};
	bool eColision(System::Drawing::Rectangle obj) {
		for each (Enemigo1 * E1 in enemigos1) {
			if (E1->NextArea().IntersectsWith(obj))
				return true;
		}
		return false;
	}
	void mover(int x_j, int y_j, System::Drawing::Graphics^ g) {
		for each (Enemigo1 * E1 in enemigos1)
			E1->eMover1(x_j, y_j, g);
	}
	void mostrar(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img) {
		for each (Enemigo1 * E1 in enemigos1)
			E1->eMostrar1(g, img);
	}
};