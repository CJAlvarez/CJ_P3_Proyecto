// Inventario_VideoJuego.cpp
//#pragma once
#include <iostream>
#include <string>
#include <typeinfo>

#include <boost/serialization/vector.hpp>

#include <boost/serialization/base_object.hpp> // TODOS
#include <boost/serialization/assume_abstract.hpp>

#include <boost/archive/polymorphic_binary_iarchive.hpp> // Carga
#include <boost/archive/polymorphic_binary_oarchive.hpp> // Guarda

#include "VideoJuego.h"
#include "Bandai.h"
#include "ElectronicArts.h"
#include "Konami.h"
#include "Microsoft.h"
#include "Nintendo.h"
#include "SEGA.h"
#include "Sony.h"
#include "SquareEnix.h"
#include "Ubisoft.h"

class Inventario_VideoJuego {	

	friend class boost::serialization::access;

	public:
		vector <VideoJuego*> videoJuegos;

		Inventario_VideoJuego(){};

		void append(VideoJuego* vj) {
			videoJuegos.push_back(vj);
		}

		template <class Archive> void serialize(Archive &ar, const unsigned int version) {
			ar.register_type(static_cast<Microsoft*> (NULL));
			ar.register_type(static_cast<Sony*> (NULL));
			ar.register_type(static_cast<Nintendo*> (NULL));
			ar.register_type(static_cast<Bandai*> (NULL));
			ar.register_type(static_cast<ElectronicArts*> (NULL));
			ar.register_type(static_cast<Konami*> (NULL));
			ar.register_type(static_cast<SEGA*> (NULL));
			ar.register_type(static_cast<SquareEnix*> (NULL));
			ar.register_type(static_cast<Ubisoft*> (NULL));
			ar & videoJuegos;
		}
};