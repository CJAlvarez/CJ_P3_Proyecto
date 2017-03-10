// cMirosoft.cpp
#include "cMicrosoft.h" 

cMicrosoft::cMicrosoft(int ano, string modelo, string estado, int serie, double precio) :
	Consola(ano, modelo, estado, serie, precio) {
		while(setModelo(modelo)) {
		cout << "¡ERROR, DATO INVALIDO!\nIngrese dato nuevamente\n_ ";
		getline(cin, modelo);
		cout << modelo << endl;
		}
	}

int cMicrosoft::setModelo(string modelo) {		
	cout << "ASDFGHJKL" << endl;
	if((modelo == "xbox") || (modelo == "xbox 360") || (modelo == "xbox One")) {
		this -> modelo = modelo;
		return 0;
	}
	return 1;
}