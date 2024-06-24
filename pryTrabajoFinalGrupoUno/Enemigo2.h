#pragma once
#include "Enemigo.h"
enum SpriteEnemigo2 {
	eEstatico
};
class Enemigo2 : public Enemigo {
public:
	SpriteEnemigo2 movimiento;
	Enemigo2(System::Drawing::Bitmap^ img) {
		x = rand() % 800;
		y = rand() % 800;
		//x = rand() % (50 - 100 + 1) * 10;
		//y = rand() % (50 - 60 + 1) * 10;
		dx = dy = 2;
		ancho = img->Width / 2;
		alto = img->Height;
		movimiento = eEstatico;
	};
	void eMostrar2(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
	{
		System::Drawing::Rectangle corte = System::Drawing::Rectangle(IDx * ancho, movimiento * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, System::Drawing::GraphicsUnit::Pixel);
		//g->DrawRectangle(System::Drawing::Pens::Black, Area());
		//g->DrawRectangle(System::Drawing::Pens::Blue, Hitbox());
	}
	void eMover2(System::Drawing::Graphics^ g) {
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