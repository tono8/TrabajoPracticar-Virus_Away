#pragma once
#include "Jugador.h"

ref class Controlador {
private:
	Jugador* jugador;

	System::Drawing::Bitmap^ imgJugador;
public:
	Controlador()
	{
		imgJugador = gcnew System::Drawing::Bitmap("img/testing1_alt2.png");

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
			if (tecla == System::Windows::Forms::Keys::Up) {
				jugador->setDY(-v);
				jugador->setMovimiento(j1CaminarArriba);
			}
			else if (tecla == System::Windows::Forms::Keys::Down) {
				jugador->setDY(v);
				jugador->setMovimiento(j1CaminarAbajo);
			}
			else if (tecla == System::Windows::Forms::Keys::Left) {
				jugador->setDX(-v);
				jugador->setMovimiento(j1CaminarIzquierda);
			}
			else if (tecla == System::Windows::Forms::Keys::Right) {
				jugador->setDX(v);
				jugador->setMovimiento(j1CaminarDerecha);
			}
		}
		else {
			if (tecla == System::Windows::Forms::Keys::Up) {
				jugador->setDY(0);
			}
			else if (tecla == System::Windows::Forms::Keys::Down) {
				jugador->setDY(0);
			}
			else if (tecla == System::Windows::Forms::Keys::Left) {
				jugador->setDX(0);
			}
			else if (tecla == System::Windows::Forms::Keys::Right) {
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