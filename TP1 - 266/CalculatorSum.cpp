#include "InstMemory.hpp"
#include "DataMemory.hpp"
#include "PipeExecution.hpp"
#include "RandomProgram.hpp"
#include "Multiply.hpp"
#include "Fibonacci.hpp"
#include "Prosthetic.hpp"
#include "Division.hpp"
#include "Power.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int opCode = 0, PC = 0;

	dataMemo* dataMemory = createMemory();

	cout << "Programas:\n1-Aleatorio\n2-Multiplicacao\n3-Fibonacci\n4-Movimento de protese (Conceitual)\n5-Divisao\n6-Potencia\n";
	int opt;
	cin >> opt;

	Instruction* instMemory;

	switch(opt)
	{
		case 1:
		{
			instMemory = randomSum();
		}
			break;

		case 2:
		{ 
			int x, y;
			cout << "Insira os valores para multiplicar: ";
			cin >> x >> y;
			instMemory = multiplication(x, y);
		}
			break;

		case 3:
		{
			int fib;
			cout << "Insira o valor para Fibonacci: ";
			cin >> fib;
			instMemory = fibonacci(fib);
		}
		case 4:
		{
			instMemory = prostControlModule();
		}
			break;

		case 5:
		{
			int divd, divend;
			cout << "Insira o divisor e o dividendo: ";
			cin >> divd >> divend;
			instMemory = division(divd, divend);
		}

		case 6:
		{
			int base, pow;
			cout << "Insira o x e y (x^y): ";
			cin >> base >> pow;
			instMemory = power(base, pow);
		}
	}

	Instruction* currentInst;	

	while(opCode != -1)
	{
		currentInst = instructionCounter(instMemory, PC);
		
		opCode = decodeInstruct(currentInst);
		
		executeInst(dataMemory, opCode, currentInst, PC);

		PC++;
	}

	deleteDMemory(dataMemory);
	deleteMemory(instMemory);
	deletePosMemory(currentInst);

	return 0;
}

