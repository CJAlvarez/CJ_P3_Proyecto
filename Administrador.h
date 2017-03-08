// Administrador.h
#pragma once

#include "Usuario.h"

class Administrador : public Usuario {
	private:		
		string contrasena;

	public:
		Administrador();
		
		// @param nombre, contrasena
		int Autenticar(string, string);
};