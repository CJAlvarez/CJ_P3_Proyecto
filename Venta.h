// Venta.h
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
#include "Usuario.h"
#include "Administrador.h"
#include "Vendedor.h"

#include <ctime>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Venta {
	private:	
		string cliente;
		vector <int>* consolas;
		vector <int>* juegos;
		string fecha;
		string hora;
		string vendedor;
		double subTotal;		
		double total;	

	public:
		Venta();
		// vendedor, cliente
		Venta(string, string);

		~Venta();

		vector <int>* getConsolas();
		vector <int>* getVideoJuegos();
		string getFecha();
		string getHora();
		double getSubTotal();		
		int getCantidadArticulos();
		string toStringF(vector <Consola*>*, vector <VideoJuego*>*);
};