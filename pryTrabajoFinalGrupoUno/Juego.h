#pragma once
#include "Jugador.h"

ref class Controlador {
private:
	Jugador* jugador;

	System::Drawing::Bitmap^ imgJugador;
public:
	Controlador()
	{
		imgJugador = gcnew System::Drawing::Bitmap("img/testing1_32_alt2.png");

		jugador = new Jugador(imgJugador);
	}
	~Controlador()
	{
		delete jugador;
	}

	void movimientoJugador(bool movimiento, System::Windows::Forms::Keys tecla)
	{
		int v = 9;
		if (movimiento == true)
		{
			if (tecla == System::Windows::Forms::Keys::W) {
				jugador->setDY(-v);
				jugador->setMovimiento(jCaminarArriba);
			}
			else if (tecla == System::Windows::Forms::Keys::S) {
				jugador->setDY(v);
				jugador->setMovimiento(jCaminarAbajo);
			}
			else if (tecla == System::Windows::Forms::Keys::A) {
				jugador->setDX(-v);
				jugador->setMovimiento(jCaminarIzquierda);
			}
			else if (tecla == System::Windows::Forms::Keys::D) {
				jugador->setDX(v);
				jugador->setMovimiento(jCaminarDerecha);
			}
		}
		else {
			if (tecla == System::Windows::Forms::Keys::W) {
				jugador->setDY(0);
			}
			else if (tecla == System::Windows::Forms::Keys::S) {
				jugador->setDY(0);
			}
			else if (tecla == System::Windows::Forms::Keys::A) {
				jugador->setDX(0);
			}
			else if (tecla == System::Windows::Forms::Keys::D) {
				jugador->setDX(0);
			}
		}
	}

	void mover(System::Drawing::Graphics^ g)
	{
		jugador->mover(g);
	}
	void mostrar(System::Drawing::Graphics^ g)
	{
		jugador->mostrar(g, imgJugador);
	}
};