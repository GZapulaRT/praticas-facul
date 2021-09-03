#include "Division.hpp"
#include "InstMemory.hpp"

Instruction* division(int divider, int dividend)
{
	int *opCode, *Add1, *Add2, *Add3;

	opCode = new int[(divider*2)+6];
	Add1 = new int[(divider*2)+6];
	Add2 = new int[(divider*2)+6];
	Add3 = new int[(divider*2)+6];

	//Posições iniciais das instruções
	opCode[0] = 2; Add1[0] = dividend; Add2[0] = 0; Add3[0] = -1;
	opCode[1] = 2; Add1[1] = 0; Add2[1] = 1; Add3[1] = -1;
	opCode[2] = 2; Add1[2] = divider; Add2[2] = 2; Add3[1] = -1;

	for(int i = 0; i<divider*2; i++)
	{
		opCode[(i*2)+3] = 1; Add1[(i*2)+3] = 0; Add2[(i*2)+3] = 1; Add3[(i*2)+3] = 1;
		opCode[(i*2)+4] = 0; Add1[(i*2)+4] = 1; Add2[(i*2)+4] = 2; Add3[(i*2)+4] = 3;
	}

	opCode[(divider*2)+3] = 2; Add1[(divider*2)+3] = -3; Add2[(divider*2)+3] = 4; Add3[(divider*2)+3] = -1; //inserir valor para correcao

	opCode[(divider*2)+4] = 1; Add1[(divider*2)+4] = 3; Add2[(divider*2)+4] = 4; Add3[(divider*2)+4] = 3; //ajuste de valor resultante

	opCode[(divider*2)+5] = -1; Add1[(divider*2)+5] = -1; Add2[(divider*2)+5] = -1; Add3[(divider*2)+5] = -1;

	Instruction* program = createInstruction(opCode, Add1, Add2, Add3, (divider*2)+6);

	delete[] opCode;
	delete[] Add1;
	delete[] Add2;
	delete[] Add3;

	return program;
}