// Venta.cpp
#include "Venta.h"
Venta::Venta(){}	
Venta::Venta(string vendedor, string cliente) {
	this -> vendedor = vendedor;
	this -> cliente = cliente;
	consolas = new vector <int>();
	juegos = new vector <int>();
	subTotal = total = 0;
}

Venta::~Venta(){
	delete[] consolas;
	delete[] juegos;
}

vector <int>* Venta::getConsolas(){
	return consolas;
}

vector <int>* Venta::getVideoJuegos() {
	return juegos;
}

string Venta::getFecha() {
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_mday << '-' << (formato.tm_mon + 1) << '-' << (formato.tm_year + 1900);
	return ss.str();
}

string Venta::getHora() {	
	stringstream ss;
	time_t tiempoActual = time(NULL);
	tm formato = *localtime(&tiempoActual);
	ss << formato.tm_hour << '-'  <<  formato.tm_min << '-' << formato.tm_sec;
	return ss.str();
}

double Venta::getSubTotal() {
	return subTotal;
}

int Venta::getCantidadArticulos() {
	return consolas -> size() + juegos -> size();
}

string Venta::toStringF(vector <Consola*>* c, vector<VideoJuego*>* v) {
	string final = "";
	final.append("		GAMEHUB\n");
	final.append("FECHA:	");
	final.append(this -> getFecha());
	final.append("\n");
	final.append("HORA:		");
	final.append(this -> getHora());
	final.append("\n");
	final.append("VENDEDOR:		");
	final.append(vendedor);
	final.append("\n");
	final.append("CLIENTE:	");
	final.append(cliente);
	final.append("\n");
	final.append("CANTIDAD DE ARTICULOS ");
	stringstream cart;
	cart << this -> getCantidadArticulos();
	final.append(cart.str());
	final.append("\n");
	for(int i = 0; i < consolas -> size(); i++) {
		final.append(c -> at(consolas -> at(i)) -> getModelo());
		final.append("	");
		stringstream pre;
		pre << c -> at(consolas -> at(i)) -> getPrecio();
		final.append(pre.str());
		final.append("\n");
	}
	for(int i = 0; i < juegos -> size(); i++) {
		final.append(v -> at(juegos -> at(i)) -> getNombre());
		final.append("	");
		stringstream pre;
		pre << v -> at(juegos -> at(i)) -> getPrecio();
		final.append(pre.str());
		final.append("\n");
	}

	final.append("SUBTOTAL:	");
	stringstream subt;
	subt << subTotal;	
	final.append(subt.str());
	final.append("\n");
	final.append("IMPUESTO:	");
	stringstream imp;
	imp << (subTotal * 0.15);
	final.append(imp.str());	
	final.append("\n");
	final.append("TOTAL:	");
	stringstream tot;
	tot << (subTotal + (subTotal * 0.15));
	final.append(tot.str());
	return final;
}