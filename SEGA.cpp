// SEGA.cpp
#include "SEGA.h"
SEGA::SEGA(){}
SEGA::SEGA(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double precio) :
	VideoJuego(nombre, ano, consola, jugadores, genero, estado, serie, precio)
	{}

int SEGA::setConsola(string consola) {
	if((consola == "Microsoft") || (consola == "Sony") || (consola == "Nintendo")) {
		this -> consola = consola;
		return 0;
	}
	return 1;
}