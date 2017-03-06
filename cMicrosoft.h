// cMicrosoft.h
#pragma once

#include "Consola.h"

class cMicrosoft : public Consola {
	public:
		// @param ano, modelo, estado, serie, precio
		cMicrosoft(int, string, string, int, double);

		// @param modelo
		int setModelo(string);
};