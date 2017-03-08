// Consola.cpp
#include "Consola.h"

Consola::Consola(int ano, string modelo, string estado, int serie, double precio) {
	this -> ano = ano;
	while(setModelo(modelo)) {
		std::cout << "¡ERROR, DATO INVALIDO!\nIngrese dato nuevamente\n_ ";
		std::getline(std::cin, modelo);
	}
	this -> estado = estado;
	this -> serie = serie;
	this -> precio = precio;
}

int Consola::setModelo(string modelo) {
	std::cout << "ERROR_MODELO_CONSOLA(Consola.cpp.16)" << std::endl;
	modelo = modelo + "_ERROR";
	return 0;
}

string Consola::getModelo() {
	return modelo;
}

double Consola::getPrecio() {
	return precio;
}

int Consola::getSerie() {
	return serie;
}