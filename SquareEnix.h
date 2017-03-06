// SquareEnix.h
#pragma once

#include "VideoJuego.h"

class SquareEnix : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		SquareEnix(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};