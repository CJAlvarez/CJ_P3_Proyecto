// Vendedor.cpp
#include "Vendedor.h"
Vendedor::Vendedor(){}
string Vendedor::getHora() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_hour << "-" << formato.tm_min << "-" << formato.tm_sec;
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

string Vendedor::getFecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '-' << (formato.tm_mon + 1) << '-' << (formato.tm_year + 1900);
	return ss.str();
}

string Vendedor::toStringF() {
	string final;
	final.append("			GAMEHUB\n");
	final.append("NOMBRE:	");
	final.append(nombre);
	final.append("\n");
	final.append("HORA ENTRADA:	");
	final.append(entrada);
	final.append("\n");
	final.append("HORA SALIDA:	");
	final.append(this -> getSalida());
	final.append("\n");
	final.append("ARTICULOS VENDIDOS:	");
	stringstream ven;
	ven << articulosVendidos;
	final.append(ven.str());
	final.append("\n");
	final.append("DINERO GENERADO:	");
	stringstream din;
	din << dineroGenerado;
	final.append(din.str());
	return final;
}