#pragma once
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class Entidad // Cambiar nombre a entidad gracias a la inclusion de la clase proyectil
{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	// Indice de direccion
	int IDx;// se declara para mostrar fotogramas de acuerdo al indice
	float zoom;
public:
	Entidad() {
		x = y = 0;
		dx = dy = 0;
		ancho = alto = 0;
		IDx = 0;
	};
	void setDX(int value) // Encapsulamiento
	{
		dx = value;
	}
	void setDY(int value) // Encapsulamiento
	{
		dy = value;
	}
	int getX() { // Encapsulamiento
		return x;
	};
	int getY() { // Encapsulamiento
		return y;
	};
	int getAncho() { // Encapsulamiento
		return ancho;
	};
	int getAlto() { // Encapsulamiento
		return alto;
	};
	int getIDx() { // Encapsulamiento
		return IDx;
	}
	System::Drawing::Rectangle Area()
	{
		return System::Drawing::Rectangle(x, y, ancho, alto);
	}
	System::Drawing::Rectangle NextArea()
	{
		return System::Drawing::Rectangle(x + dx, y + dy, ancho, alto);
	}
	virtual void mover(System::Drawing::Graphics^ g)
	{
		x += dx;
		y += dy;
	}
	virtual void mostrar(System::Drawing::Graphics^ g, System::Drawing::Bitmap^ img)
	{
		g->FillRectangle(System::Drawing::Brushes::Black, Area());
	}
};