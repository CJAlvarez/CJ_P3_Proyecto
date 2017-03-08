// adminArchivos.cpp
#include "adminArchivos.h"

adminArchivos::adminArchivos(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos) {
	this -> consolas = consolas;
	this -> videoJuegos = videoJuegos;
}

int adminArchivos::leer() {
	return 0;
}

int adminArchivos::escribir() {
	int tamano;

	// CONSOLA
	stringstream formatoConsola;
	/* Delimitadores: 
	$ Compania (M, S, N)
	 - consola $: M(1, 2, 3), S(1, 2, 3, 4, 5, 6), N(1,..., 14)
	; elemento
	
	for (int i = 0; i < consolas -> size(); ++i){
		if()
		formatoConsola << 
	}*/
	char cConsola[1000]; //(consolas -> char*) // 
	strcpy(cConsola, "Prueba");
	fstream pathConsola("log_ventas/consolas.bin", ios::binary | ios::in | ios::out | ios::trunc);
	if(!pathConsola.is_open()) {
		cout << "ERROR_ESCRIBIRCONSOLAS_ADMINARCHIVOS" << endl;
		return 1;
	}
	tamano = strlen(cConsola);	
	for (int i = 0; i < tamano; i++) {
		pathConsola.put(cConsola[i]);
	}
	pathConsola.close();
}

int adminArchivos::escribir(Venta* venta) {
	return 0;	
}

int adminArchivos::escribir(Vendedor* vendedor) {
	return 0;
}