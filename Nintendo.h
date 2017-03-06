// Nintendo.h
#pragma once

#include "VideoJuego.h"

class Nintendo : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Nintendo(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};