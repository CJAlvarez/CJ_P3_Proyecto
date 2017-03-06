// Konami.h
#pragma once

#include "VideoJuego.h"

class Konami : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Konami(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};