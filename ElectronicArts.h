// ElectronicArts.h
#pragma once

#include "VideoJuego.h"

class ElectronicArts : public VideoJuego {
	public:
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		ElectronicArts(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};