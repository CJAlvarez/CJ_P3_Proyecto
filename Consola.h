// Consola.h
#pragma once

#include <iostream>
#include <string>

using namespace std;

class Consola {
	protected:
		int ano;
		string modelo;
		string estado;
		int serie;
		double precio;

	public:
		// @param ano, modelo, estado, serie, precio
		Consola(int, string, string, int, double);

		// @param modelo
		virtual int setModelo(string);

		string getModelo();
		double getPrecio();
};