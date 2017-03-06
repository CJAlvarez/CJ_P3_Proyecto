// Ubisoft.h
#pragma once

#include "VideoJuego.h"

class Ubisoft : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Ubisoft(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};