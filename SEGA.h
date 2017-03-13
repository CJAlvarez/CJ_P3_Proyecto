// SEGA.h
#pragma once
#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>
#include "VideoJuego.h"

class SEGA : public VideoJuego {
	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & boost::serialization::base_object<VideoJuego>(*this);
	}
	public:
		SEGA();
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		SEGA(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};