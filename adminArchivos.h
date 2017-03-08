// adminArchivos.h
#pragma once

#include "Consola.h"
#include "VideoJuego.h"
#include "Vendedor.h"
#include "Venta.h"

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class adminArchivos {
	private:
		vector <Consola*>* consolas;
		vector <VideoJuego*>* videoJuegos;

	public:
		// @param consolas, videoJuegos
		adminArchivos(vector <Consola*>*, vector <VideoJuego*>*);

		int leer();
		int escribir();
		int escribir(Venta*);
		int escribir(Vendedor*);
		
};

// Leer todo en char* y luego validarlo de ahi