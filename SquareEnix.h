// SquareEnix.h
#pragma once
#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>
#include "VideoJuego.h"

class SquareEnix : public VideoJuego {
	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & boost::serialization::base_object<VideoJuego>(*this);
	}
	public:
		SquareEnix();
		// @param nombre, ano, consola, jugadores, genero, estado, serie, precio
		SquareEnix(string, int, string, int, string, string, int, double);

		// @param consola
		int setConsola(string);
};