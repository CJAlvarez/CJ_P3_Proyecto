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
#include "Inventario_Consola.cpp"
#include "Inventario_VideoJuego.cpp"

#include <exception>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <typeinfo>
#include <sstream>

#include <boost/serialization/vector.hpp>

#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp> // Carga
#include <boost/archive/polymorphic_binary_oarchive.hpp> // Guarda

using namespace std;

class adminArchivos {
	private:
		vector <Consola*>* consolas;
		vector <VideoJuego*>* videoJuegos;
		Inventario_Consola I_C;
		Inventario_VideoJuego I_VJ;

	public:
		adminArchivos();
		// @param consolas, videoJuegos
		adminArchivos(vector <Consola*>*, vector <VideoJuego*>*);

		int leer();
		int escribir();
		int escribir(Venta*);
		int escribir(Vendedor*);
		
};