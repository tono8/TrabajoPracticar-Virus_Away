#pragma once
#include "Personaje.h"
enum SpriteEnemigo {
	eCaminarDerecha,
	eCaminarIzquierda,
	eCaminarArriba,
	eCaminarAbajo,
	eEliminado
};
class Enemigo : public Personaje {
protected:
	SpriteEnemigo movimiento;
	int x_j, y_j;
public:
	Enemigo() {
		movimiento = eCaminarAbajo;
	};
};