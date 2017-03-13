// Vendedor.h
#pragma once

#include "Usuario.h"

#include <ctime>

class Vendedor : public Usuario {
	private:
		string entrada;
		string salida;
		int articulosVendidos;
		double dineroGenerado;

		string getHora();

	public:
		Vendedor();
		// @param nombre
		Vendedor(string);

		// @param cantidad de articulos vendidos
		void aumentarVendidos(int);

		// @param dinero generado
		void aumentarDineroGenerado(double);

		int getVendidos();
		double getDineroGenerado();
		string getEntrada();
		string getSalida();		
		string getFecha();
		string toStringF();
};