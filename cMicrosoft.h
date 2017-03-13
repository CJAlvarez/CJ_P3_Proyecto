// cMicrosoft.h
#pragma once
#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>
#include "Consola.h"

class cMicrosoft : public Consola {
	friend class boost::serialization::access;

	template <class Archive> void serialize(Archive& ar, const unsigned int version){
		ar & boost::serialization::base_object<Consola>(*this);		
	}
	public:
		cMicrosoft();
		// @param ano, modelo, estado, serie, precio
		cMicrosoft(int, string, string, int, double);

		// @param modelo
		virtual int setModelo(string);
};