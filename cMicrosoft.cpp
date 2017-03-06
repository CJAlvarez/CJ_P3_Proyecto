// cMirosoft.cpp
#include "cMicrosoft.h" 

cMicrosoft::cMicrosoft(int ano, string modelo, string estado, int serie, double precio) :
	Consola(ano, modelo, estado, serie, precio) {}

int cMicrosoft::setModelo(string modelo) {		
	if((modelo == "xbox") || (modelo == "xbox 360") || (modelo == "xbox One")) {
		this -> modelo = modelo;
		return 0;
	}
	return 1;
}