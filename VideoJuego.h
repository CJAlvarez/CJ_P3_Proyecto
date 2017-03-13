// VideoJuego.h
#pragma once

#include <iostream>
#include <string>
#include <typeinfo>

#include <boost/serialization/vector.hpp>

#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp> // Carga
#include <boost/archive/polymorphic_binary_oarchive.hpp> // Guarda

using namespace std;

class VideoJuego {

	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & nombre & ano & consola &jugadores & genero & estado & serie & precio;
	}

	protected:
		string nombre;
		int ano;
		string consola;
		int jugadores;
		string genero;
		string estado;
		int serie;
		double precio;

	public:
		VideoJuego();
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		VideoJuego(string, int, string, int, string, string, int, double);

		// @param consola
		virtual int setConsola(string);
		// @param genero
		void setGenero(string);
		// @param precio
		void setPrecio(double);
		// @param estado
		void setEstado(string);

		string getNombre();
		int getAno();
		string getConsola();
		int getJugadores();
		string getGenero();
		string getEstado();
		int getSerie();
		double getPrecio();

};

