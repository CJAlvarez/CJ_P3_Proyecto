# makefile
main.exe: main.o Consola.o cMicrosoft.o cNintendo.o cSony.h VideoJuego.o Bandai.o ElectronicArts.o Konami.o Microsoft.o Nintendo.o SEGA.o Sony.o SquareEnix.o Ubisoft.o Usuario.o Administrador.o Vendedor.o Venta.o adminArchivos.o Inventario_Consola.o Inventario_VideoJuego.o
	g++ main.o Consola.o cMicrosoft.o cNintendo.o cSony.o VideoJuego.o Bandai.o ElectronicArts.o Konami.o Microsoft.o Nintendo.o SEGA.o Sony.o SquareEnix.o Ubisoft.o Usuario.o Administrador.o Vendedor.o Venta.o adminArchivos.o Inventario_Consola.o Inventario_VideoJuego.o -std=c++11 -lboost_serialization -o run 

main.o: main.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h Usuario.h Administrador.h Vendedor.h Venta.h adminArchivos.h
	g++ -c main.cpp -std=c++11

# CONSOLA
Consola.o: Consola.h Consola.cpp
	g++ -c Consola.cpp

cMicrosoft.o: cMicrosoft.h cMicrosoft.cpp Consola.h
	g++ -c cMicrosoft.cpp

cNintendo.o: cNintendo.h cNintendo.cpp Consola.h
	g++ -c cNintendo.cpp

cSony.o: cSony.h cSony.cpp Consola.h
	g++ -c cSony.cpp

# VIDEOJUEGO
VideoJuego.o: VideoJuego.h VideoJuego.cpp
	g++ -c VideoJuego.cpp

Bandai.o: Bandai.h Bandai.cpp VideoJuego.h
	g++ -c Bandai.cpp

ElectronicArts.o: ElectronicArts.h ElectronicArts.cpp VideoJuego.h
	g++ -c ElectronicArts.cpp

Konami.o: Konami.h Konami.cpp VideoJuego.h
	g++ -c Konami.cpp

Microsoft.o: Microsoft.h Microsoft.cpp VideoJuego.h
	g++ -c Microsoft.cpp

Nintendo.o: Nintendo.h Nintendo.cpp VideoJuego.h
	g++ -c Nintendo.cpp

SEGA.o: SEGA.h SEGA.cpp VideoJuego.h
	g++ -c	SEGA.cpp

Sony.o: Sony.h Sony.cpp VideoJuego.h
	g++ -c Sony.cpp 

SquareEnix.o: SquareEnix.h SquareEnix.cpp VideoJuego.h
	g++ -c SquareEnix.cpp 

Ubisoft.o: Ubisoft.h Ubisoft.cpp VideoJuego.h
	g++ -c Ubisoft.cpp 

# VENTA
Venta.o: Venta.h Venta.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h Usuario.h Administrador.h Vendedor.h 
	g++ -c Venta.cpp

# USUARIO
Usuario.o: Usuario.h Usuario.cpp 
	g++ -c Usuario.cpp

Administrador.o: Administrador.h Administrador.cpp Usuario.h
	g++ -c Administrador.cpp

Vendedor.o: Vendedor.h Vendedor.cpp Usuario.h
	g++ -c Vendedor.cpp

# ARCHIVOS
adminArchivos.o: adminArchivos.h adminArchivos.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h Usuario.h Administrador.h Vendedor.h Venta.h Inventario_Consola.cpp Inventario_VideoJuego.cpp
	g++ -c adminArchivos.cpp -std=c++11

# INVENTARIOS
Inventario_Consola.o: Inventario_Consola.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h
	g++ -c Inventario_Consola.cpp -lboost_serialization -std=c++11

Inventario_VideoJuego.o: Inventario_VideoJuego.cpp VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h
	g++ -c Inventario_VideoJuego.cpp -lboost_serialization -std=c++11