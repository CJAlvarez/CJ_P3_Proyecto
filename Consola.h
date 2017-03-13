// Consola.h
#pragma once

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include <typeinfo>

#include <boost/serialization/vector.hpp>

#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp> // Carga
#include <boost/archive/polymorphic_binary_oarchive.hpp> // Guarda

using namespace std;

class Consola {

	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & ano & modelo & estado & serie & precio;
	}
	protected:
		int ano;
		string modelo;
		string estado;
		int serie;
		double precio;

	public:
		Consola();
		// @param ano, modelo, estado, serie, precio
		Consola(int, string, string, int, double);

		// @param modelo
		virtual int setModelo(string);
		// @param precio
		virtual void setPrecio(double);
		// @param estado
		virtual void setEstado(string);

		virtual string getModelo();
		virtual double getPrecio();
		virtual int getSerie();
		virtual int getAno();
		virtual string getEstado();

};
