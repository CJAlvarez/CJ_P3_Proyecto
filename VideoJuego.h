// VideoJuego.h
#pragma once

#include <iostream>
#include <string>

using namespace std;

class VideoJuego {
	protected:
		string nombre;
		int ano;
		string consola;
		int jugadores;
		string genero;
		string estado;
		int serie;
		double precio;

	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		VideoJuego(string, int, string, int, string, string, int, double);

		// @param consola
		virtual int setConsola(string);

		string getNombre();
		double getPrecio();
};