#pragma once
// La clase Juego es la clase CONTROLADORA
// Enlace del boceto del juego https://upcedupe-my.sharepoint.com/:wb:/g/personal/u201513502_upc_edu_pe/EfMt0EkFdrZAsvHCmFQwT54BhPo2i1FoQQeFJpItpi3ylA?e=HGpCRi
#include "Jugador.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "Enemigo3.h"
#include "Aliado.h"
#include "Proyectil.h" // Es tambien valido hacer la incorporacion en las clases "Jugador.h" y "Enemigo.h".
#include "frmMission.h"
#include "frmPerder.h"
#include "frmGanar.h"
ref class Controlador {
private:
	Jugador* jugador;
	Enemigos1* enemigos1;
	Enemigos2* enemigos2;
	Enemigos3* enemigos3;
	Aliados* aliados;
	Proyectiles* proyectiles;

	System::Drawing::Bitmap^ imgJugador;
	System::Drawing::Bitmap^ imgEnemigo1;
	System::Drawing::Bitmap^ imgEnemigo2;
	System::Drawing::Bitmap^ imgEnemigo3;
	System::Drawing::Bitmap^ imgAliado;

	bool finalizar = false;
	int mejorCD; // Cooldown de perdida de salud ante la colision con un enemigo
	int cronometro_1;
public:
	Controlador(	int salud_j, int crM_1,
					int pX_e1, int pY_e1, int cant_e1, 
					int pX_e2, int pY_e2, int cant_e2, 
					int pX_e3, int pY_e3, int cant_e3,
					int pX_a, int pY_a, int cant_a)
	{
		//
		// nombres de imagenes asignadas al jugador:
		// jugador_v1_64_alt1
		// testing1
		// testing1_32_alt1
		// testing1_32_alt2
		// jugador_v2-2_64
		//
		imgJugador = gcnew System::Drawing::Bitmap("img/jugador_v2-2_64.png");
		//
		// nombres de imagenes asignadas al enemigo 1:
		// testing2_32_alt2
		// testing2_32_alt3
		// testing2_64_alt3
		// enemigo1_v1_64_alt1 (Aumento en parpadeo)
		// enemigo1_v2_64
		// enemigo1_v4_64 // Su diseño es igual al los 'Moleks' del juego 'Phozon'
		//
		imgEnemigo1 = gcnew System::Drawing::Bitmap("img/enemigo1_v4_64.png");
		//
		// nombres de imagenes asignadas al enemigo 2:
		// testing3_32_alt2
		// enemigo2_v1_64 // Su diseño es igual al personaje 'Chemic' del juego 'Phozon'
		//
		imgEnemigo2 = gcnew System::Drawing::Bitmap("img/testing3_32_alt2.png");
		//
		// nombres de imagenes asignadas al enemigo 3:
		// testing4_32_alt2
		//
		imgEnemigo3 = gcnew System::Drawing::Bitmap("img/testing4_32_alt2.png");
		//
		// nombres de imagenes asignados al los aliados:
		// testing5_32_alt2
		// aliado_v1_64_alt1
		//
		imgAliado = gcnew System::Drawing::Bitmap("img/aliado_v2_64_alt1.png");

		jugador = new Jugador(imgJugador, salud_j);
		enemigos1 = new Enemigos1(pX_e1, pY_e1, imgEnemigo1, cant_e1);
		enemigos2 = new Enemigos2(pX_e2, pY_e2, imgEnemigo2, cant_e2);
		enemigos3 = new Enemigos3(pX_e3, pY_e3, imgEnemigo3, cant_e3);
		aliados = new Aliados(pX_a, pY_a, imgAliado, cant_a);
		proyectiles = new Proyectiles();

		mejorCD = 0;
		cronometro_1 = crM_1 * 1000;
	}
	~Controlador()
	{
		delete jugador, enemigos1, enemigos2, enemigos3, aliados, proyectiles;
	}

	void movimientoJugador(bool movimiento, System::Windows::Forms::Keys tecla)
	{
		int v = 6;
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
	void DispararJugador(bool movimiento, System::Windows::Forms::Keys tecla) {
		int v = 20;
		if (movimiento == true)
		{
			if (tecla == System::Windows::Forms::Keys::I) {
				jugador->setMovimiento(jDispararArriba);
				proyectiles->prAgregar(new Proyectil(jugador->getX() + jugador->getAncho() / 2, jugador->getY() + jugador->getAlto() / 2, 0, -v));
			}
			else if (tecla == System::Windows::Forms::Keys::K) {
				jugador->setMovimiento(jDispararAbajo);
				proyectiles->prAgregar(new Proyectil(jugador->getX() + jugador->getAncho() / 2, jugador->getY() + jugador->getAlto() / 2, 0, v));
			}
			else if (tecla == System::Windows::Forms::Keys::J) {
				jugador->setMovimiento(jDispararIzquierda);
				proyectiles->prAgregar(new Proyectil(jugador->getX() + jugador->getAncho() / 2, jugador->getY() + jugador->getAlto() / 2, -v, 0));
			}
			else if (tecla == System::Windows::Forms::Keys::L) {
				jugador->setMovimiento(jDispararDerecha);
				proyectiles->prAgregar(new Proyectil(jugador->getX() + jugador->getAncho() / 2, jugador->getY() + jugador->getAlto() / 2, v, 0));
			}
		}
	}
	bool mover(System::Drawing::Graphics^ g)
	{
		for (int i = 0; i < enemigos1->eSize(); i++) {
			Enemigo1* E1 = enemigos1->getP(1);
			if (E1->getMovimiento() == eEliminadoV2 && E1->getIDx() == 26) {
				enemigos1->eEliminar(i);
			}
		}
		for (int i = 0; i < proyectiles->prSize(); i++) {
			Proyectil* pr = proyectiles->get(i);
			enemigos1->eLimpiar(pr->Area());
		}
		if (enemigos1->eColision(jugador->Area()) && clock() - mejorCD >= 4000/* ||
			enemigos2->eColision(jugador->Area()) && clock() - mejorCD >= 4000 ||
			enemigos3->eColision(jugador->Area()) && clock() - mejorCD >= 4000*/) {
			//pryTrabajoFinalGrupoUno::frmMission^ pregunta_t = gcnew pryTrabajoFinalGrupoUno::frmMission();
			//pregunta_t->ShowDialog();
			jugador->setVida(-1);
			mejorCD = clock();
		}
		if (jugador->getVida() == 0) {
			jugador->setMovimiento(jCapturado);
			if (jugador->getMovimiento() == jCapturado && jugador->getIDx() == 4) {
				if (!finalizar) {
					finalizar = true;
					pryTrabajoFinalGrupoUno::frmMission^ menuSlc = gcnew pryTrabajoFinalGrupoUno::frmMission();
					menuSlc->ShowDialog();
				}
				return false;
			}
		}
		if (jugador->getMovimiento() != jCapturado) {
			jugador->mover(g);
		}
		enemigos1->mover(g, jugador->getX(), jugador->getY());
		enemigos2->mover(g);
		enemigos3->mover(g);
		proyectiles->mover(g);
		aliados->mover(g);
		return true;
	}
	void mostrar(System::Drawing::Graphics^ g)
	{
		enemigos1->mostrar(g, imgEnemigo1);
		enemigos2->mostrar(g, imgEnemigo1);
		enemigos3->mostrar(g, imgEnemigo1);
		aliados->mostrar(g, imgAliado);
		proyectiles->mostrar(g);
		jugador->mostrar(g, imgJugador);
	}
};