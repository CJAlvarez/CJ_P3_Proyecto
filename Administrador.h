// Administrador.h
#pragma once

#include "Usuario.h"

class Administrador : public Usuario {
	private:		
		string contrasena;

	public:
		// @param nombre, contrasena
		Administrador();
		
		// @param nombre, contrasena
		int Autenticar(string, string);
};