#pragma once
#include "Personaje.h"
enum SpriteEnemigo
{
	eCaminarDerecha,
	eCaminarIzquierda,
	eCaminarArriba,
	eCaminarAbajo,
	eEliminado
};
class Enemigo : public Personaje
{
protected:
	SpriteEnemigo movimiento;
public:
	Enemigo() {
		movimiento = eCaminarAbajo;
	};
	void mover(System::Drawing::Graphics^ g)
	{
		if (!(x + dx >= 0 && x + ancho + dx < g->VisibleClipBounds.Width)) {
			dx *= -1;
		}
		if (!(y + dy >= 0 && y + alto + dy < g->VisibleClipBounds.Height)) {
			dy *= -1;
		}

		if (dy < 0) {
			movimiento = eCaminarIzquierda;
		}
		else if (dy > 0) {
			movimiento = eCaminarDerecha;
		}
		else if (dx < 0) {
			movimiento = eCaminarArriba;
		}
		else if (dx > 0) {
			movimiento = eCaminarAbajo;
		}

		x += dx;
		y += dy;
	}
};
//class Enemigos
//{
//private:
//
//public:
//	Enemigos(System::Drawing::Bitmap^ img, int cant) {
//		for (int i = 0; i < cant; i++) {
//
//		}
//	};
//	~Enemigos() {
//
//	};
//};