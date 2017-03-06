// Vendedor.cpp
#include "Vendedor.h"

string Vendedor::getHora() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_hour << ":" << formato.tm_min << ":" << formato.tm_sec;
	return ss.str();
}

Vendedor::Vendedor(string nombre) : Usuario(nombre) {
	entrada = getHora();
	articulosVendidos = dineroGenerado = 0;
}

void Vendedor::aumentarVendidos(int vendidos) {
	this -> articulosVendidos += vendidos;
}

void Vendedor::aumentarDineroGenerado(double dinero) {
	this -> dineroGenerado += dinero;
}

int Vendedor::getVendidos() {
	return articulosVendidos;
}

double Vendedor::getDineroGenerado(){
	return dineroGenerado;
}

string Vendedor::getEntrada() {
	return entrada;
}

string Vendedor::getSalida() {
	return getHora();
}