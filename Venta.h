// Venta.h
#pragma once

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
		// vendedor, cliente
		Venta(string, string);

		~Venta();

		vector <int>* getConsolas();
		vector <int>* getVideoJuegos();
		string getFecha();
		string getHora();
		double getSubTotal();		
		int getCantidadArticulos();
};