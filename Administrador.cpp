// Administrador.cpp
#include "Administrador.h"

Administrador::Administrador() {
	nombre = "user";
	contrasena = "password";
}

int Administrador::Autenticar(string nombre, string contrasena) {
	if(this -> nombre == nombre && this -> contrasena == contrasena) {
		return 0;
	}
	return 1;
}