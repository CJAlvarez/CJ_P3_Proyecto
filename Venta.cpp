// Venta.cpp
#include "Venta.h"
	
Venta::Venta(string vendedor, string cliente) {
	this -> vendedor = vendedor;
	this -> cliente = cliente;
	consolas = new vector <int>();
	juegos = new vector <int>();
	subTotal = total = 0;
}

Venta::~Venta(){
	delete[] consolas;
	delete[] juegos;
}

vector <int>* Venta::getConsolas(){
	return consolas;
}

vector <int>* Venta::getVideoJuegos() {
	return juegos;
}

string Venta::getFecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '/' << (formato.tm_mon + 1) << '/' << (formato.tm_year + 1900);
	return ss.str();
}

string Venta::getHora() {	
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_hour << ':' + formato.tm_min << ':' << formato.tm_sec;
	return ss.str();
}

double Venta::getSubTotal() {
	return subTotal;
}

int Venta::getCantidadArticulos() {
	return consolas -> size() + juegos -> size();
}