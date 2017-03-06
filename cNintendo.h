// cNintendo.h
#pragma once

#include "Consola.h"

class cNintendo : public Consola {
	public:	
		// @param ano, modelo, estado, serie, precio
		cNintendo(int, string, string, int, double);

		// @param modelo
		int setModelo(string);
};