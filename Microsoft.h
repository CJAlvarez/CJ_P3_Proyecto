// Microsoft.h
#pragma once

#include "VideoJuego.h"

class Microsoft : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Microsoft(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};