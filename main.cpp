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
#include <time.h>
#include <stdio.h>
#include <stdlib.h>	
#include <unistd.h>
#include <string>
#include <vector>

using namespace std;

// Modelos de consolas
// @param #consola
// @return vector <"modelo">
vector <string>* modelos(string);

// Agregar, modificar, eliminar
// @param accion, objeto
void manipularObjetos(string, string);

// Numeros de serie
// @param consolas, videoJuegos, objeto
// @return numero de serie
int series(vector <Consola*>*, vector <VideoJuego*>*, string);

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
						manipularObjetos(accion_Administrador, objeto);
						
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

void manipularObjetos(string accion, string objeto) {
	// Datos 

	int ano, serie, jugadores;
	string modelo, estado, nombre, consola, genero;
	double precio;

	if(objeto == "1") {
		cout << "Ano de lanzamiento: ";
		cin >> ano;
		cout << "Modelo: ";
		getline(cin, modelo);
		cout << "Estado: ";
		getline(cin, estado);

	}

	// AGREGAR
	if(accion == "1") {
		
	}	
	// MODIFICAR
	else if(accion == "2") {
				
	}
	// ELIMINAR
	else if(accion == "3") {

	}
	// OTRO
	else if(accion != "0") {
		cout << "¡ACCION INVALIDA!" << endl;
	}
}
int series(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos, string objeto) {
	// Consola
	if(objeto == "1") {

	} else {

	}
}