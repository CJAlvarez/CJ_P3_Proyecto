// adminArchivos.cpp
#include "adminArchivos.h"

adminArchivos::adminArchivos(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos) {
	this -> consolas = consolas;
	this -> videoJuegos = videoJuegos;
}

int adminArchivos::leer() {
	ifstream ifs_C("CONSOLAS/Consolas.bin", ios::binary);
	boost::archive::polymorphic_binary_iarchive ia_C(ifs_C);	
	ia_C >> I_C;

	for (int i = 0; i < I_C.consolas.size(); i++) {
		this -> consolas -> push_back(I_C.consolas.at(i));
	}

	ifstream ifs_VJ("VIDEOJUEGOS/VideoJuegos.bin", ios::binary);
	boost::archive::polymorphic_binary_iarchive ia_VJ(ifs_VJ);
	ia_VJ >> I_VJ;	

	for (int i = 0; i < I_VJ.videoJuegos.size(); i++) {
		this -> videoJuegos -> push_back(I_VJ.videoJuegos.at(i));
	}
	return 0;
}

int adminArchivos::escribir() {
	for (int i = 0; i < consolas -> size(); i++) {
		I_C.append(consolas -> at(i));
	}
	ofstream ofs_C("CONSOLAS/Consolas.bin", ios::binary | ios:: trunc);
	boost::archive::polymorphic_binary_oarchive oa_C(ofs_C);
	oa_C << I_C;

	for (int i = 0; i < videoJuegos -> size(); i++) {
		I_VJ.append(videoJuegos -> at(i));
	}
	ofstream ofs_VJ("VIDEOJUEGOS/VideoJuegos.bin", ios::binary);
	boost::archive::polymorphic_binary_oarchive oa_VJ(ofs_VJ);
	oa_VJ << I_VJ;	
	return 0;
}

int adminArchivos::escribir(Venta* venta) {
	string path = "log_ventas/";
	path.append(venta -> getFecha());
	path.append("_");
	path.append(venta -> getHora());
	path.append(".log");
	const char* ruta = path.c_str();
	//stringstream ss;
	//ss << ruta;
	//cout << ruta << endl;	
	ofstream file;
	file.open(ruta, ios::out);

	if(file.fail()) {
		std::cout << "Open_File_Error" << std::endl;
		return -1;
	}	
	file << venta -> toStringF(consolas, videoJuegos);	
	file.close();	
	//delete[] ruta;	
	return 0;
}


int adminArchivos::escribir(Vendedor* vendedor) {
	string path = "usuarios_log/";
	path.append(vendedor -> getNombre());
	path.append("_");
	path.append(vendedor -> getFecha());
	path.append(".log");
	const char* ruta = path.c_str();
	ofstream file;
	file.open(ruta, ios::out);

	if(file.fail()) {
		std::cout << "Open_File_Error" << std::endl;
		return -1;
	}
	file << vendedor -> toStringF();
	file.close();
	//delete[] ruta;	
	return 0;
}

