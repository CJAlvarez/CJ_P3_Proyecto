// cNintendo.cpp
#include "cNintendo.h"

cNintendo::cNintendo(int ano, string modelo, string estado, int serie, double precio) :
	Consola(ano, modelo, estado, serie, precio) {
		while(setModelo(modelo)) {
		cout << "¡ERROR, DATO INVALIDO!\nIngrese dato nuevamente\n_ ";
		getline(cin, modelo);
		cout << modelo << endl;
		}
	}

int cNintendo::setModelo(string modelo) {		
	if((modelo == "Nintendo Entertainment System") || (modelo == "Super Nintendo Entertainment System")
	|| (modelo == "Nintendo 64") || (modelo == "Nintendo GameCube") || (modelo == "Nintendo Wii")
	|| (modelo == "Nintendo Wii U") || (modelo == "Nintendo Switch") || (modelo == "Gameboy")
	|| (modelo == "Gameboy Colors") || (modelo == "Gameboy Advance") || (modelo == "Nintendo DS")
	|| (modelo == "Nintendo DSi") || (modelo == "Nintendo 3DS") || (modelo == "Nintendo New 3DS")){
		this -> modelo = modelo;			
		return 0;
	}
	return 1;
}