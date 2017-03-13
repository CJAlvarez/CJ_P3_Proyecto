// cSony.cpp
#include "cSony.h"
cSony::cSony(){}
cSony::cSony(int ano, string modelo, string estado, int serie, double precio) :
	Consola(ano, modelo, estado, serie, precio) {
		while(setModelo(modelo)) {
			cout << "¡ERROR, DATO INVALIDO!\nIngrese dato nuevamente\n_ ";
			getline(cin, modelo);
			cout << modelo << endl;
		}
	}

int cSony::setModelo(string modelo) {		
	if((modelo == "Play Station 1") || (modelo == "Play Station 2") || (modelo == "Play Station 3")
	|| (modelo == "Play Station 4") || (modelo == "PSP") || (modelo == "PS Vita")) {
		this -> modelo = modelo;
		return 0;
	}	
	return 1;
}