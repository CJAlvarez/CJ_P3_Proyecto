// Sony.h
#pragma once

#include "VideoJuego.h"

class Sony : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Sony(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};