// cSony.h
#pragma once
#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>
#include "Consola.h"

class cSony : public Consola {
	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & boost::serialization::base_object<Consola>(*this);
	}
	public:
		cSony();
		// @param ano, modelo, estado, serie, precio
		cSony(int, string, string, int, double);

		// @param modelo
		virtual int setModelo(string);
};