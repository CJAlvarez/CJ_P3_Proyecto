// Sony.cpp
#include "Sony.h"
Sony::Sony(){}
Sony::Sony(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double precio) :
	VideoJuego(nombre, ano, consola, jugadores, genero, estado, serie, precio)
	{}

int Sony::setConsola(string consola) {
	if(consola != "Sony") {
		return 1;
	} else {
		this -> consola = consola;
		return 0;
	}
}