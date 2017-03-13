// Sony.h
#pragma once
#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>
#include "VideoJuego.h"

class Sony : public VideoJuego {
	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & boost::serialization::base_object<VideoJuego>(*this);
	}
	public:
		Sony();
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		Sony(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};