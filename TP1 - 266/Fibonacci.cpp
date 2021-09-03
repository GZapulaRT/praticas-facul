#include "InstMemory.hpp"
#include "Fibonacci.hpp"

using namespace std;

Instruction* fibonacci(int fib)
{
	int *opCode, *Add1, *Add2, *Add3;

	opCode = new int[fib+2];
	Add1 = new int[fib+2];
	Add2 = new int[fib+2];
	Add3 = new int[fib+2];

	opCode[0] = 2; Add1[0] = 0; Add2[0] = 0; Add3[0] = -1;
	if(fib>=1)
	{
		opCode[1] = 2; Add1[1] = 1; Add2[1] = 1; Add3[1] = -1; 
	}

	if(fib >= 2)
	{
		for(int i = 2; i<=fib; i++)
		{
			opCode[i] = 1; Add1[i] = i-2; Add2[i] = i-1; Add3[i] = i;
		}
	}
	
	opCode[fib+1] = -1; Add1[fib+1] = -1; Add2[fib+1] = -1; Add3[fib+1] = -1;

	Instruction* program = createInstruction(opCode, Add1, Add2, Add3, fib+2);

	delete[] opCode;
	delete[] Add1;
	delete[] Add2;
	delete[] Add3;

	return program;
}