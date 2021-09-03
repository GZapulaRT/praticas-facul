#include "InstMemory.hpp"
#include "Multiply.hpp"

using namespace std;

Instruction* multiplication(int mult1, int mult2)
{
	int *opCode, *Add1, *Add2, *Add3;

	opCode = new int[mult2+3];
	Add1 = new int[mult2+3];
	Add2 = new int[mult2+3];
	Add3 = new int[mult2+3];

	//Posições iniciais das instruções
	opCode[0] = 2; Add1[0] = mult1; Add2[0] = 0; Add3[0] = -1;
	opCode[1] = 2; Add1[1] = 0; Add2[1] = 1; Add3[1] = -1;

	for(int i = 0; i<mult2; i++)
	{
		opCode[i+2] = 1; Add1[i+2] = 0; Add2[i+2] = 1; Add3[i+2] = 1;
	}

	opCode[mult2+2] = -1; Add1[mult2+2] = -1; Add2[mult2+2] = -1; Add3[mult2+2] = -1;

	Instruction* program = createInstruction(opCode, Add1, Add2, Add3, mult2+3);

	delete[] opCode;
	delete[] Add1;
	delete[] Add2;
	delete[] Add3;

	return program;
}