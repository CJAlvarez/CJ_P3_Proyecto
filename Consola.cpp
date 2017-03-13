// Consola.cpp
#include "Consola.h"
Consola::Consola() {
	ano = serie = precio = 0;
}

Consola::Consola(int ano, string modelo, string estado, int serie, double precio) {
	this -> ano = ano;	
	this -> estado = estado;
	this -> serie = serie;
	this -> precio = precio;
}

int Consola::setModelo(string modelo) {		
	return 0;
}

void Consola::setPrecio(double precio) {
	this -> precio = precio;
}

void Consola::setEstado(string estado) {
	this -> estado = estado;
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

int Consola::getAno() {
	return ano;
}

string Consola::getEstado() {
	return estado;
}

