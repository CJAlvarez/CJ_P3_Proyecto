// adminArchivos.h
#pragma once

#include "Consola.h"
#include "cMicrosoft.h"
#include "cNintendo.h"
#include "cSony.h"
#include "VideoJuego.h"
#include "Bandai.h"
#include "ElectronicArts.h"
#include "Konami.h"
#include "Microsoft.h"
#include "Nintendo.h"
#include "SEGA.h"
#include "Sony.h"
#include "SquareEnix.h"
#include "Ubisoft.h"
#include "Venta.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Vendedor.h"

#include <exception>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <typeinfo>
//#include <cstring.h>
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