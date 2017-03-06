// cSony.cpp
#include "cSony.h"

cSony::cSony(int ano, string modelo, string estado, int serie, double precio) :
	Consola(ano, modelo, estado, serie, precio) {}

int cSony::setModelo(string modelo) {		
	if((modelo == "Play Station 1") || (modelo == "Play Station 2") || (modelo == "Play Station 3")
	|| (modelo == "Play Station 4") || (modelo == "PSP") || (modelo == "PS Vita")) {
		this -> modelo = modelo;
		return 0;
	}	
	return 1;
}