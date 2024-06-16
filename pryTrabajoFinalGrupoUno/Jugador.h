#pragma once
#include "Personaje.h"
enum SpriteJugador {
	jCaminarDerecha,
	jCaminarIzquierda,
	jCaminarArriba,
	jCaminarAbajo,
	jCapturado
};
class Jugador : public Personaje {
private:
	SpriteJugador movimiento;
public:
	Jugador(System::Drawing::Bitmap^ img) {
		x = 60; y = 60;
		dx = dy = 0;

		ancho = img->Width / 27;//Cantidad de fotogramas horizontales - Cantidad regular: 9
		alto = img->Height / 5;//Cantidad de fotogramas verticales

		movimiento = jCaminarAbajo;
	}
	void setMovimiento(SpriteJugador value) {
		movimiento = value;
	}
	SpriteJugador getMovimiento() {
		return movimiento;
	}

	void mover(System::Drawing::Graphics^ g) {
		if (x + dx >= 0 && x + ancho + dx < g->VisibleClipBounds.Width) {
			x += dx;
		}
		if (y + dy >= 0 && y + alto + dy < g->VisibleClipBounds.Height) {
			y += dy;
		}
	}
	void mostrar(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
	{
		System::Drawing::Rectangle corte = System::Drawing::Rectangle(IDx * ancho, movimiento * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, System::Drawing::GraphicsUnit::Pixel);
		//g->DrawRectangle(Pens::Black, Area());

		if (dx != 0 || dy != 0)
		{
			if (movimiento >= jCaminarDerecha && movimiento <= jCaminarAbajo && (dx != 0 || dy != 0)) {
				// Cantidad de fotogramas en la imagen
				// Cantidad regular: 9
				// Fotogramas en "testing1_32_alt2": 27
				IDx = (IDx + 1) % 27;
			}
			else if (movimiento == jCapturado) {
				// Cantidad de fotogramas en la imagen
				// Cantidad regular: 9
				// Fotogramas en "testing1_32_alt2": 27
				IDx = (IDx + 1) % 27;
			}
		}
	}
};