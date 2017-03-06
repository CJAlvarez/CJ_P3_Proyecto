// cSony.h
#pragma once

#include "Consola.h"

class cSony : public Consola {
	public:
		// @param ano, modelo, estado, serie, precio
		cSony(int, string, string, int, double);

		// @param modelo
		int setModelo(string);
};