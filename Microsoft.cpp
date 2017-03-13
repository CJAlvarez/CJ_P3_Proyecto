// Microsoft.cpp
#include "Microsoft.h"
Microsoft::Microsoft(){}
Microsoft::Microsoft(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double precio) :
	VideoJuego(nombre, ano, consola, jugadores, genero, estado, serie, precio)
	{}

int Microsoft::setConsola(string consola) {
	if(consola != "Microsoft") {
		return 1;
	} else {
		this -> consola = consola;
		return 0;
	}
}