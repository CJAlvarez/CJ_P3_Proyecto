// SEGA.h
#pragma once

#include "VideoJuego.h"

class SEGA : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		SEGA(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};