// main.cpp
#include "Consola.h"
#include "cMicrosoft.h"
#include "cNintendo.h"
#include "cSony.h"
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
#include "Venta.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Vendedor.h"
#include "adminArchivos.h"

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>
#include <string>
#include <vector>

using namespace std;

// Modelos de consolas
// @param empresa
string modelos(string);

// Agregar, modificar, eliminar
// @param consolas, videoJuegos, accion, objeto
void manipularObjetos(vector <Consola*>*, vector <VideoJuego*>*, string, string);

// Numeros de serie
// @param consolas, videoJuegos, objeto, numero
int series(vector <Consola*>*, vector <VideoJuego*>*, string, int);

int main() {
	vector <Consola*>* consolas = new vector <Consola*>();
	vector <VideoJuego*>* videoJuegos = new vector <VideoJuego*>();
	Administrador* administrador = new Administrador();
	string accion_Menu1;

	cout << "\n\t\t¡BIENVENIDO!" << endl;
	do {
		accion_Menu1 = "";
		cout << endl <<  "Elija accion:\n1.- Inciar Administrador\n2.- Inciar Vendedor\n0.- Salir del sistema\n_ ";
		getline(cin, accion_Menu1);

		// SESION ADMINISTRADOR
		if(accion_Menu1 == "1") {
			string contrasena;
			string usuario;
			string accion_Autenticar;
			do {
				cout << endl;
				accion_Autenticar = "";
				cout << "Contraseña: ";
				getline(cin, contrasena);
				cout << "Usuario: ";
				getline(cin, usuario);				

				// AUTENTICAR ADMINISTRADOR
				if(administrador -> Autenticar(usuario, contrasena) == 0) {
					string accion_Administrador;
					do {
					cout << endl;
						accion_Administrador = "";
						string objeto = "";
						cout << "Accion:\n1.- Agregar\n2.- Modificar\n3.- Eliminar\n0.- Cerrar Sesion\n_ ";
						getline(cin, accion_Administrador);
						cout << endl;
						cout << "Objeto:\n1.-Consola\n2.-VideoJuego\n_ ";
						getline(cin, objeto);
						manipularObjetos(consolas, videoJuegos, accion_Administrador, objeto);
						
					} while(accion_Administrador != "0");
				} else {
					cout << "¡AUTENTICACION FALLIDA!" << endl;					
				}

				cout << "Ingrese 0 para volver a intentar, u otro para volver al Menu Principal\n_ ";
				getline(cin, accion_Autenticar);
			} while(accion_Autenticar == "0");
		} 
		// SESION VENDEDOR
		else if(accion_Menu1 == "2") {

		} 
		// OTRO		
		else if (accion_Menu1 != "0") {
			cout << "¡ACCION INVALIDA!" << endl;
		}
	} while(accion_Menu1 != "0");
	cout << "¡HASTA PRONTO!" << endl;
	return 0;
}	

string modelos(string empresa) {
	string modelo;
	cout << "Modelos:" << endl;
	// Microsoft
	if(empresa == "1") {
		cout << "MICROSOFT" << endl;
		cout << "1.- xbox\n2.- xbox 360\n3.- xbox One" << endl;
	}
	// Sony
	else if(empresa == "2") {
		cout <<"1.- Play Station 1\n2.- Play Station 2\n3.- Play Station 3\n4.- Play Station 4\n5.- PSP\n6.- PS Vita" << endl;
	}
	// Nintendo
	else if(empresa == "3") {
		cout << "NINTENDO" << endl;
		cout << "1.- Nintendo Entertainment System\n2.- Super Nintendo Entertainment System\n3.-Nintendo 64\n4.- Nintendo Gamecube\n";
		cout << "5.- Nintendo Wii\n6.- Nintendo Wii U\n7.- Nintendo Switch\n8.- Gameboy\n 9.- Gameboy Colors\n10.- Gameboy Advance\n";
		cout << "11.- Nintendo DS\n12.- Nintendo DSi\n13.- Nintendo 3DS\n14.- Nintendo New 3DS" << endl;
	}
	cout << "Modelo: ";
	getline(cin, modelo);
	return modelo;
}

void manipularObjetos(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos, string accion, string objeto) {
	// Datos 
	int ano, serie, jugadores;
	string modelo, estado, nombre, consola, genero, empresa;
	double precio;

	// Consola
	if(objeto == "1" && (accion == "1" || accion == "2")) {
		cout << "CONSOLA" << endl;
		cout << "Año de lanzamiento: ";
		cin >> ano;
		cout << "Empresa: ";
		getline(cin, empresa);
		cout <<"";
		modelo = modelos(empresa);
		cout << "Estado: ";
		getline(cin, estado);
		do {
			cout << "Numero de serie: ";
			cin >> serie;			
		} while (series(consolas, videoJuegos, objeto, serie) != 0);	
		cout << "Precio: ";
		cin >> precio;
		// AGREGAR
		if(accion == "1") {
			consolas -> push_back(new Consola(ano,modelo, estado, serie, precio));
		} else {
			int pos;
			for (int i = 0; i < consolas -> size(); i++) {
				cout << i << ".- " << consolas -> at(i) -> getModelo() << endl;
			}
			cout << "# de Consola: ";
			cin >> pos;
			if(pos >= 0 && pos < consolas -> size()){
				delete consolas -> at(pos);
				consolas -> at(pos) = new Consola(ano,modelo, estado, serie, precio);
			} else {
				cout << "¡CONSOLA INEXISTENTE!" << endl;
			}
		}
	}
	// VideoJuego
	else if(objeto == "2" && (accion == "1" || accion == "2")) {
		cout << "Nombre";
		getline(cin, nombre);
		cout << "Año de lanzamiento: ";
		cin >> ano;
		cout << "Consola: ";
		getline(cin, consola);
		cout << "Numero de jugadores: ";
		cin >> jugadores;
		cout << "Genero: ";
		getline(cin, genero);
		cout << "Año de lanzamiento: ";
		cin >> ano;
		cout << "Modelo: ";
		getline(cin, modelo);
	}
	// ELIMINAR
	else if(accion == "3") {

	}
	// OTRO
	else if(accion != "0") {
		cout << "¡ACCION INVALIDA!" << endl;
	}
}

int series(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos, string objeto, int serie) {
	// Consola
	if(objeto == "1") {
		for(int i = 0; i < consolas -> size(); i++) {
			if(serie == consolas -> at(i) -> getSerie()) {
				return 1;
			}
		}
		return 0;

	}
	// Video Juego
	else {
		for(int i = 0; i < videoJuegos -> size(); i++) {
			if(serie == videoJuegos -> at(i) -> getSerie()) {
				return 1;
			}
		}
		return 0;
	}
}