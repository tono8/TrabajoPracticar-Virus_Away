#pragma once
#include "Entidad.h"
enum SpriteJugador {
	jCaminarDerecha,
	jCaminarIzquierda,
	jCaminarArriba,
	jCaminarAbajo,
	jCapturado
};
class Jugador : public Entidad {
private:
	int vida_j;
	int puntos;
	SpriteJugador movimiento;
public:
	Jugador(System::Drawing::Bitmap^ img, int salud_j) {
		x = 360; y = 360;
		dx = dy = 0;

		ancho = img->Width / 4;//Cantidad de fotogramas horizontales - Cantidad regular: 9
		alto = img->Height / 5;//Cantidad de fotogramas verticales

		movimiento = jCaminarAbajo;

		vida_j = salud_j;
	}
	void setVida(int value) {
		vida_j += value;
	}
	int getVida(int value) {
		return vida_j;
	}
	void setMovimiento(SpriteJugador value) {
		movimiento = value;
	}
	SpriteJugador getMovimiento() {
		return movimiento;
	}
	int getPuntos() {
		return puntos;
	}
	void setPuntos(int value) {
		puntos += value;
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
		g->DrawString("Vidas: " + vida_j, gcnew System::Drawing::Font("Arial", 14), System::Drawing::Brushes::White, 0, 0);
		System::Drawing::Rectangle corte = System::Drawing::Rectangle(IDx * ancho, movimiento * alto, ancho, alto);
		g->DrawImage(img, Area(), corte, System::Drawing::GraphicsUnit::Pixel);
		//g->DrawRectangle(Pens::Black, Area());

		if (dx != 0 || dy != 0)
		{
			if (movimiento >= jCaminarDerecha && movimiento <= jCaminarAbajo && (dx != 0 || dy != 0)) {
				// Cantidad de fotogramas en la imagen
				// Cantidad regular: 9
				// Fotogramas en "testing1_32_alt2": 27
				// Fotogramas en "jugador_v1_64_alt1": 3
				IDx = (IDx + 1) % 3;
			}
			else if (movimiento == jCapturado) {
				// Cantidad de fotogramas en la imagen
				// Cantidad regular: 9
				// Fotogramas en "testing1_32_alt2": 27
				// Fotogramas en "jugador_v1_64_alt1": 4
				IDx = (IDx + 1) % 4;
			}
		}
	}
};