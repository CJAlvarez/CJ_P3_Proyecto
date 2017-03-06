// Nintendo.cpp
#include "Nintendo.h"

Nintendo::Nintendo(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double precio) :
	VideoJuego(nombre, ano, consola, jugadores, genero, estado, serie, precio)
	{}

int Nintendo::setConsola(string consola) {
	if(consola != "Nintendo") {
		return 1;
	} else {
		this -> consola = consola;
		return 0;
	}
}