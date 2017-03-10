# makefile
main.exe: main.o Consola.o cMicrosoft.o cNintendo.o cSony.h VideoJuego.o Bandai.o ElectronicArts.o Konami.o Microsoft.o Nintendo.o SEGA.o Sony.o SquareEnix.o Ubisoft.o Usuario.o Administrador.o Vendedor.o Venta.o adminArchivos.o
	g++ main.o Consola.o cMicrosoft.o cNintendo.o cSony.o VideoJuego.o Bandai.o ElectronicArts.o Konami.o Microsoft.o Nintendo.o SEGA.o Sony.o SquareEnix.o Ubisoft.o Usuario.o Administrador.o Vendedor.o Venta.o adminArchivos.o -std=c++11 -o run 

main.o: main.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h Usuario.h Administrador.h Vendedor.h Venta.h adminArchivos.h
	g++ -c main.cpp Consola.cpp cMicrosoft.cpp cNintendo.cpp cSony.cpp VideoJuego.cpp Bandai.cpp ElectronicArts.cpp Konami.cpp Microsoft.cpp Nintendo.cpp SEGA.cpp Sony.cpp SquareEnix.cpp Ubisoft.cpp Usuario.cpp Administrador.cpp Vendedor.cpp Venta.cpp adminArchivos.cpp -std=c++11

# CONSOLA
Consola.o: Consola.h Consola.cpp
	g++ -c Consola.cpp

cMicrosoft.o: cMicrosoft.h cMicrosoft.cpp Consola.h
	g++ -c cMicrosoft.cpp Consola.cpp

cNintendo.o: cNintendo.h cNintendo.cpp Consola.h
	g++ -c cNintendo.cpp Consola.cpp

cSony.o: cSony.h cSony.cpp Consola.h
	g++ -c cSony.cpp Consola.cpp

# VIDEOJUEGO
VideoJuego.o: VideoJuego.h VideoJuego.cpp
	g++ -c VideoJuego.cpp

Bandai.o: Bandai.h Bandai.cpp VideoJuego.h
	g++ -c Bandai.cpp VideoJuego.cpp

ElectronicArts.o: ElectronicArts.h ElectronicArts.cpp VideoJuego.h
	g++ -c ElectronicArts.cpp VideoJuego.cpp

Konami.o: Konami.h Konami.cpp VideoJuego.h
	g++ -c Konami.cpp VideoJuego.cpp

Microsoft.o: Microsoft.h Microsoft.cpp VideoJuego.h
	g++ -c Microsoft.cpp VideoJuego.cpp

Nintendo.o: Nintendo.h Nintendo.cpp VideoJuego.h
	g++ -c Nintendo.cpp VideoJuego.cpp

SEGA.o: SEGA.h SEGA.cpp VideoJuego.h
	g++ -c	SEGA.cpp VideoJuego.cpp

Sony.o: Sony.h Sony.cpp VideoJuego.h
	g++ -c Sony.cpp VideoJuego.cpp

SquareEnix.o: SquareEnix.h SquareEnix.cpp VideoJuego.h
	g++ -c SquareEnix.cpp VideoJuego.h

Ubisoft.o: Ubisoft.h Ubisoft.cpp VideoJuego.h
	g++ -c Ubisoft.cpp VideoJuego.cpp

# VENTA
Venta.o: Venta.h Venta.cpp
	g++ -c Venta.cpp

# USUARIO
Usuario.o: Usuario.h Usuario.cpp 
	g++ -c Usuario.cpp

Administrador.o: Administrador.h Administrador.cpp Usuario.h
	g++ -c Administrador.cpp Usuario.cpp

Vendedor.o: Vendedor.h Vendedor.cpp Usuario.h
	g++ -c Vendedor.cpp Usuario.cpp

# ARCHIVOS
adminArchivos.o: adminArchivos.h adminArchivos.cpp Consola.h cMicrosoft.h cNintendo.h cSony.h VideoJuego.h Bandai.h ElectronicArts.h Konami.h Microsoft.h Nintendo.h SEGA.h Sony.h SquareEnix.h Ubisoft.h Usuario.h Administrador.h Vendedor.h Venta.h 
	g++ -c Consola.cpp cMicrosoft.cpp cNintendo.cpp cSony.cpp VideoJuego.cpp Bandai.cpp ElectronicArts.cpp Konami.cpp Microsoft.cpp Nintendo.cpp SEGA.cpp Sony.cpp SquareEnix.cpp Ubisoft.cpp Usuario.cpp Administrador.cpp Vendedor.cpp Venta.cpp  -std=c++11