// Inventario_Consola.cpp
//#pragma once
#include <iostream>
#include <string>
#include <typeinfo>

#include <boost/serialization/vector.hpp>

#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp> // Carga
#include <boost/archive/polymorphic_binary_oarchive.hpp> // Guarda

#include "Consola.h"
#include "cMicrosoft.h"
#include "cNintendo.h"
#include "cSony.h"

class Inventario_Consola {	

	friend class boost::serialization::access;

	public:
		vector <Consola*> consolas;

		Inventario_Consola(){};

		void append(Consola* c) {
			consolas.push_back(c);
		}

		template <class Archive> void serialize(Archive &ar, const unsigned int version) {
			ar.register_type(static_cast<cMicrosoft*> (NULL));
			ar.register_type(static_cast<cSony*> (NULL));
			ar.register_type(static_cast<cNintendo*> (NULL));

			ar & consolas;
		}
};