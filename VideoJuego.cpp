// VideoJuego.cpp
#include "VideoJuego.h"
VideoJuego::VideoJuego() {}

VideoJuego::VideoJuego(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double getPrecio)  {
	this -> nombre = nombre;
	this -> ano = ano;
	while(setConsola(consola)) {
		std::cout << "ERROR, DATO INVALIDO\nIngrese dato nuevamente" << std::endl;
		std::getline(std::cin, consola);
	}
	this -> jugadores = jugadores;
	this -> genero = genero;
	this -> estado = estado;
	this -> serie = serie;
	this -> precio = precio;
}

int VideoJuego::setConsola(string consola) {
	return 0;
}

void VideoJuego::setGenero(string genero) {
	this -> genero = genero;
}

void VideoJuego::setPrecio(double precio) {
	this -> precio = precio;
}

void VideoJuego::setEstado(string estado) {
	this -> estado = estado;
}

string VideoJuego::getNombre() {
	return nombre;
}

double VideoJuego::getPrecio() {
	return precio;
}

int VideoJuego::getSerie() {
	return serie;
}

