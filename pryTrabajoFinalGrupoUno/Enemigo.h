#pragma once
#include "Entidad.h"
enum SpriteEnemigo {
	eCaminarDerecha,
	eCaminarIzquierda,
	eCaminarArriba,
	eCaminarAbajo,
	eEliminado
};
class Enemigo : public Entidad {
protected:
	SpriteEnemigo movimiento;
	int x_j, y_j;
public:
	Enemigo() {
		movimiento = eCaminarAbajo;
	};
};