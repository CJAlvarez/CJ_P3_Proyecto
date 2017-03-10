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
#include <exception>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>
#include <string>
#include <vector>
#include <type_traits>

using namespace std;

// Modelos de consolas
// @param empresa
string modelos_Consola(int);

// Agregar, modificar, eliminar
// @param consolas, videoJuegos, accion, objeto
void manipularObjetos(vector <Consola*>*, vector <VideoJuego*>*, int, int);

// Numeros de serie
// @param consolas, videoJuegos, objeto, numero
int series(vector <Consola*>*, vector <VideoJuego*>*, int, int);

int main() {
	vector <Consola*>* consolas = new vector <Consola*>();
	vector <VideoJuego*>* videoJuegos = new vector <VideoJuego*>();
	adminArchivos ARCHIVOS(consolas, videoJuegos);
	cout << ARCHIVOS.leer() << endl;

	Administrador* administrador = new Administrador();
	int accion_Menu1;

	cout << "" << endl << "\t\t¡BIENVENIDO!" << endl;
	do {		
		cout << endl <<  "Elija accion:" << endl << "1.- Inciar Administrador" << endl << "2.- Inciar Vendedor" << endl << "0.- Salir del sistema" << endl << "_ ";
		cin >> accion_Menu1;

		// SESION ADMINISTRADOR
		if(accion_Menu1 == 1) {
			cout << endl << "ADMINISTRADOR" << endl;
			string contrasena;
			string usuario;
			int accion_Autenticar;
			do {
				cout << endl;			
				cout << "Contraseña: ";
				getline(cin.ignore(), contrasena);
				cout << "Usuario: ";
				getline(cin, usuario);				

				// AUTENTICAR ADMINISTRADOR
				if(administrador -> Autenticar(usuario, contrasena) == 0) {
					int accion_Administrador;
					do {
					cout << endl;						
						int objeto;
						cout << "Accion:" << endl << "1.- Agregar" << endl << "2.- Modificar" << endl << "3.- Eliminar" << endl << "0.- Cerrar Sesion" << endl << "_ ";
						cin >> accion_Administrador;
						if(accion_Administrador == 0) {
							break;
						}
						cout << endl;
						cout << "Objeto:" << endl << "1.-Consola" << endl << "2.-VideoJuego" << endl << "_ ";
						cin >> objeto;
						try {
							manipularObjetos(consolas, videoJuegos, accion_Administrador, objeto);
						} catch (exception e){
							cout << "!HA OCURRIDO UN PROBLEMA¡" << endl << "La acción no se completo" << endl;
						}
						
					} while(accion_Administrador != 0);
				} else {
					cout << "¡AUTENTICACION FALLIDA!" << endl;					
				}

				cout << "Ingrese 0 para seguir en Administrador, u otro para volver al Menu Principal" << endl << "_ ";			
				cin >> accion_Autenticar;
			} while(accion_Autenticar == 0);
		} 
		// SESION VENDEDOR
		else if(accion_Menu1 == 2) {
			Vendedor* vendedor;
			string nombre;
			cout << "VENDEDOR" << endl;
			cout << "Nombre: ";
			getline(cin, nombre);
			vendedor = new Vendedor(nombre);
			int accion_vendedor;
			do{
				cout << endl << "1.- Vender Consola" << endl << "2.- Vender VideoJuego" << endl << "0.- Cerrar Sesion" << endl << "_ ";
				cin >> accion_vendedor;

				if (accion_vendedor == 1) {

				} else if(accion_vendedor == 2) {

				} else if(accion_vendedor != 0){

				}

			} while(accion_vendedor != 0);
			delete vendedor;
		} 
		// OTRO		
		else if (accion_Menu1 != 0) {
			cout << "¡ACCION INVALIDA!" << endl;
		}
	cin.ignore(); } while(accion_Menu1 != 0);
	cout << "¡HASTA PRONTO!" << endl;
	return 0;
}	

string modelos_Consola(int empresa) {	
	string Microsoft_M[3] = {"xbox", "xbox 360", "xbox One"};
	string Sony_M[6] = {"Play Station 1", "Play Station 2", "Play Station 3", "Play Station 4", "PSP", "PS Vita"};
	string Nintendo_M[14] = {"Nintendo Entertainment System", "Super Nintendo Entertainment System", "Nintendo 64", "Nintendo Gamecube",
		"Nintendo Wii", "Nintendo Wii U", "Nintendo Switch", "Gameboy", " Gameboy Colors", "Gameboy Advance",
		"Nintendo DS", "Nintendo DSi", "Nintendo 3DS", "Nintendo New 3DS"};
	int modelo;
	cout << endl;	
	// Microsoft
	if(empresa == 1) {
		cout << "MICROSOFT" << endl;
		cout << "1.- xbox" << endl << "2.- xbox 360" << endl << "3.- xbox One" << endl;
		do {
			cout << "Modelo: ";
			cin >> modelo;
		} while(modelo < 1 || modelo > 3);		
		return Microsoft_M[modelo-1];
	}
	// Sony
	else if(empresa == 2) {
		cout << "SONY" << endl;
		cout <<"1.- Play Station 1" << endl << "2.- Play Station 2" << endl << "3.- Play Station 3" << endl << "4.- Play Station 4" << endl << "5.- PSP" << endl << "6.- PS Vita" << endl;
		do {
			cout << "Modelo: ";
			cin >> modelo;
		} while(modelo < 1 || modelo > 6);
		return Sony_M[modelo-1];
	}
	// Nintendo
	else if(empresa == 3) {
		cout << "NINTENDO" << endl;
		cout << "1.- Nintendo Entertainment System" << endl << "2.- Super Nintendo Entertainment System" << endl << "3.-Nintendo 64" << endl << "4.- Nintendo Gamecube" << endl << "";
		cout << "5.- Nintendo Wii" << endl << "6.- Nintendo Wii U" << endl << "7.- Nintendo Switch" << endl << "8.- Gameboy" << endl << " 9.- Gameboy Colors" << endl << "10.- Gameboy Advance" << endl << "";
		cout << "11.- Nintendo DS" << endl << "12.- Nintendo DSi" << endl << "13.- Nintendo 3DS" << endl << "14.- Nintendo New 3DS" << endl;
		do {
			cout << "Modelo: ";
			cin >> modelo;
		} while(modelo < 1 || modelo > 14);
		return Nintendo_M[modelo-1];
	}
}

void manipularObjetos(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos, int accion, int objeto) {
	// Datos 
	int empresa, ano, serie, jugadores;
	string modelo, estado, nombre, consola, genero;
	double precio;
	cout << endl;
	// AGREGAR
	if(accion == 1) {
		cout << "AGREGAR ";
		// Consola
		if(objeto == 1) {
			cout << "CONSOLA" << endl;

			cout << "Año de lanzamiento: ";
			cin >> ano;

			cout << "Estado: ";								
			getline(cin.ignore(), estado);
			cout  << estado << "¡*" << endl;
			do {
				cout << "Numero de serie: ";
				cin >> serie;			
			} while (series(consolas, videoJuegos, objeto, serie) != 0);	
			
			cout << "Precio: ";
			cin >> precio;
			
			cout << endl;
			do{
				cout << "Empresa:" << endl << "1.- Microsoft" << endl << "2.- Sony" << endl << "3.- Nintendo" << endl << "_ ";
				cin >> empresa;
			} while(empresa < 1 || empresa > 3);
			modelo = modelos_Consola(empresa);				
			if(empresa == 1) {
				consolas -> push_back(new cMicrosoft(ano,modelo, estado, serie, precio));
			} else if (empresa == 2) {
				consolas -> push_back(new cSony(ano,modelo, estado, serie, precio));
			} else {
				consolas -> push_back(new cNintendo(ano,modelo, estado, serie, precio));
			}
		}
		// VideoJuego
		else if(objeto == 2) {
			string empresas[9] = {"Microsoft", "Sony", "Nintendo", "Bandai", "Konami", "Square Enix", "Electronic Arts", "SEGA", "Ubisoft"};
			cout << "VIDEO JUEGO" << endl;

			cout << "Nombre: ";
			getline(cin.ignore(), nombre);

			cout << "Año de lanzamiento: ";
			cin >> ano;
					
			cout << "Numero de jugadores: ";
			cin >> jugadores;
			
			cout << "Genero: ";
			getline(cin.ignore(), genero);
			
			cout << "Estado: ";
			getline(cin, estado);

			do {
				cout << "Numero de serie: ";
				cin >> serie;			
			} while (series(consolas, videoJuegos, objeto, serie) != 0);	
			
			cout << "Precio: ";
			cin >> precio;

			do{
				cout << "Consola:" << endl << "1.- Microsoft" << endl << "2.- Sony" << endl << "3.- Nintendo" << endl;
				cout << "4.- Bandai" << endl << "5.- konami" << endl << "6.- Square Enix" << endl << "7.- Electronic Arts" << endl;
				cout << "8.- SEGA" << endl << "9.- Ubisoft" << endl << "_ ";
				cin >> empresa;			
			} while(empresa < 1 || empresa > 9);	
			consola = empresas[empresa];
			switch (empresa) {
				case 1:{
					videoJuegos -> push_back(new Microsoft(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 2:{
					videoJuegos -> push_back(new Sony(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 3:{
					videoJuegos -> push_back(new Nintendo(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 4:{
					videoJuegos -> push_back(new Bandai(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 5:{
					videoJuegos -> push_back(new Konami(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 6:{
					videoJuegos -> push_back(new SquareEnix(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 7:{
					videoJuegos -> push_back(new ElectronicArts(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 8:{
					videoJuegos -> push_back(new SEGA(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
				case 9:{
					videoJuegos -> push_back(new Ubisoft(nombre, ano, consola, jugadores, genero, estado, serie, precio));
					break;
				}
			}
		} else {
			cout << "¡OBJETO INEXISTENTE!" << endl;
		}
	} 
	// MODIFICAR
	else if(accion == 2 || accion == 3) {
		int pos;
		double precio;
		string estado;
		if(objeto == 1 && consolas -> size() == 0) {
			cout << "¡NO HAY CONSOLAS!" << endl;
		}
		else if(objeto == 1) {
			cout << "CONSOLAS:" << endl;
			for (int i = 0; i < consolas -> size(); i++) {
				cout << i << ".- " << consolas -> at(i) -> getModelo() << " - " << consolas -> at(i) -> getPrecio() << "$" << endl;
			}			
			do{
				cout << "Posicion: ";
				cin >> pos;
			} while(pos < 0 || pos >= consolas -> size());

			if(accion == 2) {
				// typeof
				cout << "MODIFICAR" << endl;
				cout << "Precio: ";
				cin >> precio;
				cout << "Estado: ";
				getline(cin.ignore(), estado);
				consolas -> at(pos) -> setPrecio(precio);
				consolas -> at(pos) -> setEstado(estado);
			} else {
				cout << "ELIMINAR" << endl;
				consolas -> erase(consolas -> begin() + pos);
			}

		} 
		else if(objeto == 2 && videoJuegos -> size() == 0) {
			cout << "¡NO HAY VIDEOJUEGOS!" << endl;
		}
		else if(objeto == 2 ) {
			cout << "VIDEO JUEGOS" << endl;
			for (int i = 0; i < videoJuegos -> size(); i++) {
				cout << i << ".- " << videoJuegos -> at(i) -> getNombre() << " - " << videoJuegos -> at(i) -> getPrecio() << "$" << endl;
			}			
			do{
				cout << "Posicion: ";
				cin >> pos;

			} while(pos < 0 || pos >= videoJuegos -> size());

			if(accion == 2) {
				string genero;
				cout << "MODIFICAR" << endl;
				cout << "Precio: ";
				cin >> precio;
				cout << "Estado: ";
				getline(cin.ignore(), estado);
				cout << "Genero: ";
				getline(cin, genero);			
				videoJuegos -> at(pos) -> setPrecio(precio);
				videoJuegos -> at(pos) -> setEstado(estado);
				videoJuegos -> at(pos) -> setGenero(genero);
			} else {
				cout << "ELIMINAR" << endl;
				videoJuegos -> erase(videoJuegos -> begin() + pos);
			}

		} else {
			cout << "¡OBJETO INEXISTENTE!" << endl;
		}
	}
	// OTRO
	else if(accion != 0) {
		cout << "¡ACCION INVALIDA!" << endl;
	}
}

int series(vector <Consola*>* consolas, vector <VideoJuego*>* videoJuegos, int objeto, int serie) {
	// Consola
		if(objeto == 1) {
		for(int i = 0; i < consolas -> size(); i++) {
			if(serie == consolas -> at(i) -> getSerie()) {
				cout <<  "¡NUMERO DE SERIE NO VALIDO!" << endl;
				return 1;
			}
		}
		return 0;

	}
	// Video Juego
	else {
		for(int i = 0; i < videoJuegos -> size(); i++) {
			if(serie == videoJuegos -> at(i) -> getSerie()) {
				cout <<  "¡NUMERO DE SERIE NO VALIDO!" << endl;
				return 1;
			}
		}
		return 0;
	}
}	