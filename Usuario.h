// Usuario.h
#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Usuario {
	protected:
		string nombre;

	public:
	Usuario();

	// nombre
	Usuario(string);

	string getNombre();
};