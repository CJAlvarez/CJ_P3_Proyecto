// Bandai.h
#pragma once

#include "VideoJuego.h"

class Bandai : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Bandai(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};