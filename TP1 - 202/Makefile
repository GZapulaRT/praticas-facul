all: Banda.o Musica.o Album.o Potencia.o Main.cpp
	g++ Banda.o Musica.o Album.o Potencia.o Main.cpp -Wall -o Main.exe

Banda.o: Banda.cpp
	g++ -c Banda.cpp -Wall -o Banda.o

Musica.o: Musica.cpp
	g++ -c Musica.cpp -Wall -o Musica.o

Album.o: Album.cpp
	g++ -c Album.cpp -Wall -o Album.o

CriarMapa.o: CriarMapa.cpp
	g++ -c CriarMapa.cpp -Wall -o CriarMapa.o

Potencia.o: Potencia.cpp
	g++ -c Potencia.cpp -Wall -o Potencia.o

clean:
	del *.o Main.exe

run:
	Main.exe < Input.txt > Output.txt