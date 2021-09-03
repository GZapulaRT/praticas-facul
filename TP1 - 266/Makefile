all: CalculatorSum.cpp DataMemory.o InstMemory.o PipeExecution.o RandomProgram.o Multiply.o Fibonacci.o Prosthetic.o Division.o Power.o
	g++ CalculatorSum.cpp DataMemory.o InstMemory.o PipeExecution.o RandomProgram.o Multiply.o Fibonacci.o Prosthetic.o Division.o Power.o -Wall -o CalculatorSum.exe

DataMemory.o: DataMemory.cpp
	g++ -c DataMemory.cpp -Wall -o DataMemory.o

InstMemory.o: InstMemory.cpp
	g++ -c InstMemory.cpp -Wall -o InstMemory.o

PipeExecution.o: PipeExecution.cpp
	g++ -c PipeExecution.cpp -Wall -o PipeExecution.o

RandomProgram.o: RandomProgram.cpp
	g++ -c RandomProgram.cpp -Wall -o RandomProgram.o

Multiply.o: Multiply.cpp
	g++ -c Multiply.cpp -Wall -o Multiply.o

Fibonacci.o: Fibonacci.cpp
	g++ -c Fibonacci.cpp -Wall -o Fibonacci.o

Prosthetic.o: Prosthetic.cpp
	g++ -c Prosthetic.cpp -Wall -o Prosthetic.o

Division.o: Division.cpp
	g++ -c Division.cpp -Wall -o Division.o

Power.o: Power.cpp
	g++ -c Power.cpp -Wall -o Power.o

clean:
	del *.o CalculatorSum.exe

run:
	CalculatorSum.exe