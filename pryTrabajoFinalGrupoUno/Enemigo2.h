#pragma once
#include "Enemigo.h"
enum SpriteEnemigo2 {
	eCaminarDerecha2,
	eCaminarIzquierda2,
	eCaminarArriba2,
	eCaminarAbajo2,
	eEliminado2
};
class Enemigo2 : public Enemigo {
public:
	SpriteEnemigo2 movimiento2;
	Enemigo2(int x_e2, int y_e2, System::Drawing::Bitmap^ img) {
		x = x_e2;
		y = y_e2;
		ancho = img->Width / 27;//Cantidad de fotogramas horizontales
		alto = img->Height / 5;//Cantidad de fotogramas verticales
	};
	void eMostrar2(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
	{
		System::Drawing::Rectangle corte = System::Drawing::Rectangle(IDx * ancho, movimiento2 * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, System::Drawing::GraphicsUnit::Pixel);
		//g->DrawRectangle(Pens::Black, Area());

		if (movimiento2 >= eCaminarDerecha2 && movimiento2 <= eCaminarAbajo2)
			// Cantidad de fotogramas en la imagen
			// Cantidad regular: 9
			// Fotogramas en "testing2_32_alt2": 27
			IDx = (IDx + 1) % 27;
		else if (movimiento == eEliminado)
	void eMover2(System::Drawing::Graphics^ g)
	{
		if (!(x + dx >= 0 && x + ancho + dx < g->VisibleClipBounds.Width)) {
			dx *= -1;
		}
		if (!(y + dy >= 0 && y + alto + dy < g->VisibleClipBounds.Height)) {
			dy *= -1;
		}

		if (dx < 0) {
			movimiento2 = eCaminarIzquierda2;
		}
		else if (dx > 0) {
			movimiento2 = eCaminarDerecha2;
		}
		else if (dy < 0) {
			movimiento2 = eCaminarArriba2;
		}
		else if (dy > 0) {
			movimiento2 = eCaminarAbajo2;
		}

		}
		else if (dy > 0) {
			movimiento = eCaminarAbajo;
		}

		x += dx;
		y += dy;
	}
};
class Enemigos2
{
	vector<Enemigo2*> enemigos2;
public:
	Enemigos2(System::Drawing::Rectangle obj, System::Drawing::Bitmap^ img, int cant) {
		for (int i = 0; i < cant; i++)
		{
			enemigos2.push_back(new Enemigo2(img));
			//Enemigo2* E2 = new Enemigo2(img);
			//if (E2->Area().IntersectsWith(obj) == false && eColision(E2->Area()) == false) {
			//	enemigos2.push_back(E2);
			//}
			//else
			//{
			//	delete E2;
			//	i--;
			//}
		}
	};
	~Enemigos2() {
		for each (Enemigo2 * E2 in enemigos2) {
			delete E2;
		}
	};
	//~Enemigos2() {
	//	for (int i = 0; i < enemigos2.size(); i++)
	//		delete enemigos2.at(i);
	//	}
	//};
	bool eColision(System::Drawing::Rectangle obj) {
		for each (Enemigo2 * E2 in enemigos2) {
			if (E2->NextArea().IntersectsWith(obj)) {
				return true;
			}
		}
		return false;
	}
	void mover(System::Drawing::Graphics^ g) {
		for each (Enemigo2 * E2 in enemigos2) {
			E2->eMover2(g);
		}
	}
	void mostrar(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img) {
		for (Enemigo2* E2 : enemigos2) {
			E2->eMostrar2(g, img);
		}
	}
};