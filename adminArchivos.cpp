// adminArchivos.cpp
#include "adminArchivos.h"

adminArchivos::adminArchivos(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos) {
	this -> consolas = consolas;
	this -> videoJuegos = videoJuegos;
}

int adminArchivos::leer() {
	try{
		// CONSOLAS
		FILE* arch_consola = fopen("consolas.bin", "rb");
		consolas -> push_back(NULL);	
		do {
			fread(consolas -> at(consolas -> size() - 1), sizeof(Consola), 1, arch_consola);
		} while(!feof(arch_consola));
		fclose(arch_consola);

		// VIDEOJUEGOS
		FILE* arch_juego = fopen("videoJuegos.bin", "rb");
		videoJuegos -> push_back(NULL);	
		do {
			fread(videoJuegos -> at(videoJuegos -> size() - 1), sizeof(VideoJuego), 1, arch_juego);
		} while(!feof(arch_juego));
		fclose(arch_juego);
		return 0;
	} catch(exception e) {
		cout << "HUBO PROBLEMAS DE LECTURA BINARIA" << endl;
	}
		return 1;
}



int adminArchivos::escribir() {
	try {
		// CONSOLAS
		FILE* arch_consola = fopen("consolas.bin", "wb");
		for  (int i = 0; i < consolas -> size(); i++) {
			// @param &variable, tamaño(objeto), bites, direccion
			fwrite(consolas -> at(i), sizeof(Consola), 1, arch_consola);
		}
		fclose(arch_consola);

		// VIEDOJUEGOS
		FILE* arch_juego = fopen("videoJuegos.bin", "wb");
		for  (int i = 0; i < videoJuegos -> size(); i++) {
			// @param &variable, tamaño(objeto), bites, direccion
			fwrite(videoJuegos -> at(i), sizeof(VideoJuego), 1, arch_juego);		
		}
		fclose(arch_juego);
		return 0;
	} catch (exception e) {
		cout << "HUBO PROBLEMAS DE ESCRITURA BINARIA" << endl;
	}
		return 1;
}

int adminArchivos::escribir(Venta* venta) {
	return 0;	
}

int adminArchivos::escribir(Vendedor* vendedor) {
	return 0;
}