all: potencia.o inversor.o binario.o prac4Main.cpp
	g++ potencia.o inversor.o binario.o prac4Main.cpp -Wall -o prac4Main.exe
	
potencia.o: potencia.cpp
	g++ -c potencia.cpp -Wall -o potencia.o

inversor.o: inversor.cpp
	g++ -c inversor.cpp -Wall -o inversor.o
	
binario.o: binario.cpp
	g++ -c binario.cpp -Wall -o binario.o
	
clean:
	del *.o prac4main.exe 

run:
	prac4Main.exe
