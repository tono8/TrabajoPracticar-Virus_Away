#pragma once
#include "Personaje.h"
enum SpriteEnemigo
{
	eCaminarDerecha,
	eCaminarIzquierda,
	eCaminarArriba,
	eCaminarAbajo,
	eMorir
};
class Enemigo : public Personaje
{
private:
	SpriteEnemigo movimiento;
public:
	Enemigo(System::Drawing::Bitmap^ img) {

	};
};