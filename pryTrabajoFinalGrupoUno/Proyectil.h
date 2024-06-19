#pragma once
#include "Entidad.h"
class Proyectil : public Entidad
{
public:
	Proyectil(int x_pr, int y_pr, int dx_pr, int dy_pr) {
		this->x = x_pr;
		this->y = y_pr;
		this->dx = dx_pr;
		this->dy = dy_pr;
		ancho = alto = 3;
		if (dx != 0) {
			ancho = 30;
		}
		if (dy != 0) {
			alto = 30;
		}
	};
};
class Proyectiles
{
private:
	vector<Proyectil*> proyectiles;
public:
	~Proyectiles() {
		for (int i = 0; i < proyectiles.size(); i++) {
			delete proyectiles.at(i);
		}
	};
	void prAgregar(Proyectil* proyectil) {
		proyectiles.push_back(proyectil);
	}
	void prEliminar(int pos) {
		proyectiles.erase(proyectiles.begin() + pos);
	}
	int prSize() {
		return proyectiles.size();
	}
	Proyectil* get(int pos) {
		return proyectiles[pos];
	}
	bool prColision(System::Drawing::Rectangle obj) {
		for each (Proyectil * pr in proyectiles) {
			if (pr->Area().IntersectsWith(obj))
				return true;
		}
		return false;
	}
	void mover(System::Drawing::Graphics^ g) {
		for (Proyectil* pr : proyectiles) {
			pr->mover(g);
		}
		System::Drawing::Rectangle pantalla = System::Drawing::Rectangle(0, 0, (int)g->VisibleClipBounds.Width, (int)g->VisibleClipBounds.Height);
		for (int i = 0; i < prSize(); i++) {
			if (proyectiles[i]->Area().IntersectsWith(pantalla) == false) {
				prEliminar(i--);
			}
		}
	}
	void mostrar(System::Drawing::Graphics^ g) {
		for each (Proyectil* pr in proyectiles)
			pr->mostrar(g, nullptr);
	}
};