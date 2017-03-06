// VideoJuego.cpp
#include "VideoJuego.h"

VideoJuego::VideoJuego(string nombre, int ano, string consola, int jugadores, string genero, string estado, int serie, double precio)  {
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
	std::cout << "ERROR_CONSOLA_VIDEOJUEGO(VideoJuego.cpp.16)" << std::endl;
	return 0;
}

string VideoJuego::getNombre() {
	return nombre;
}

double VideoJuego::getPrecio() {
	return precio;
}