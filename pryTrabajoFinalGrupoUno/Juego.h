#pragma once
#include "Jugador.h"
#include "Enemigo.h"
#include "Aliado.h"
ref class Controlador {
private:
	Jugador* jugador;
	Enemigos* enemigos;

	System::Drawing::Bitmap^ imgJugador;
	System::Drawing::Bitmap^ imgEnemigo1;
	System::Drawing::Bitmap^ imgEnemigo2;
	System::Drawing::Bitmap^ imgEnemigo3;
	System::Drawing::Bitmap^ imgAliado;
public:
	Controlador()
	{
		imgJugador = gcnew System::Drawing::Bitmap("img/testing1_32_alt2.png");
		imgEnemigo1 = gcnew System::Drawing::Bitmap("img/testing2_32_alt2.png");
		imgEnemigo2 = gcnew System::Drawing::Bitmap("img/testing3_32_alt2.png");
		imgEnemigo3 = gcnew System::Drawing::Bitmap("img/testing4_32_alt2.png");
		imgAliado = gcnew System::Drawing::Bitmap("img/testing5_32_alt2.png");

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