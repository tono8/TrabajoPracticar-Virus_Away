#pragma once
// Enlace del boceto del juego https://upcedupe-my.sharepoint.com/:wb:/g/personal/u201513502_upc_edu_pe/EfMt0EkFdrZAsvHCmFQwT54BhPo2i1FoQQeFJpItpi3ylA?e=HGpCRi
// 
#include "Jugador.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "Enemigo3.h"
#include "Aliado.h"
ref class Controlador {
private:
	Jugador* jugador;
	Enemigos1* enemigos1;
	Enemigos2* enemigos2;
	Enemigos3* enemigos3;
	Aliados* aliados;

	System::Drawing::Bitmap^ imgJugador;
	System::Drawing::Bitmap^ imgEnemigo1;
	System::Drawing::Bitmap^ imgEnemigo2;
	System::Drawing::Bitmap^ imgEnemigo3;
	System::Drawing::Bitmap^ imgAliado;
public:
	Controlador(	/*int salud_j, */
					int pX_e1, int pY_e1, int cant_e1, 
					int pX_e2, int pY_e2, int cant_e2, 
					int pX_e3, int pY_e3, int cant_e3,
					int pX_a, int pY_a, int cant_a)
	{
		imgJugador = gcnew System::Drawing::Bitmap("img/testing1_32_alt2.png");
		imgEnemigo1 = gcnew System::Drawing::Bitmap("img/testing2_32_alt3.png");
		imgEnemigo2 = gcnew System::Drawing::Bitmap("img/testing3_32_alt2.png");
		imgEnemigo3 = gcnew System::Drawing::Bitmap("img/testing4_32_alt2.png");
		imgAliado = gcnew System::Drawing::Bitmap("img/testing5_32_alt2.png");

		jugador = new Jugador(imgJugador);
		enemigos1 = new Enemigos1(pX_e1, pY_e1, imgEnemigo1, cant_e1);
		enemigos2 = new Enemigos2(pX_e2, pY_e2, imgEnemigo2, cant_e2);
		enemigos3 = new Enemigos3(pX_e3, pY_e3, imgEnemigo3, cant_e3);
		aliados = new Aliados(pX_a, pY_a, imgAliado, cant_a);
	}
	~Controlador()
	{
		delete jugador, enemigos1, enemigos2, enemigos3, aliados;
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
		enemigos1->mover(g, jugador->getX(), jugador->getY());
		enemigos2->mover(g);
		enemigos3->mover(g);
		aliados->mover(g);
	}
	void mostrar(System::Drawing::Graphics^ g)
	{
		jugador->mostrar(g, imgJugador);
		enemigos1->mostrar(g, imgEnemigo1);
		enemigos2->mostrar(g, imgEnemigo1);
		enemigos3->mostrar(g, imgEnemigo1);
		aliados->mostrar(g, imgAliado);
	}
};