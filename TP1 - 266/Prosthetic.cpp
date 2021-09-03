#include "Prosthetic.hpp"
#include "InstMemory.hpp"
#include <cstdlib>
#include <ctime>

Instruction* prostControlModule()
{
	int *opCode, *Add1, *Add2, *Add3;

	int size = rand()%1200;

	opCode = new int[size];
	Add1 = new int[size];
	Add2 = new int[size];
	Add3 = new int[size];

	srand(time(0));

	int local = 0; //definindo locais do controle, depois definindo como 0 - coxa, 1 - joelho, 2- calcanhar, 3- dedos

	for(int i = 0; i<(size-1)/2; i++)
	{
		local = rand();
		if(local%4 == 0) //coxa
		{
			opCode[i*2] = 2; Add1[i*2] = rand()%180 - 90; Add2[i*2] = 1; Add3[i*2] = -1;
			opCode[i*2+1] = 1; Add1[i*2+1] = 0; Add2[i*2+1] = 1; Add3[i*2+1] = 0;
		}
		else if(local%4 == 1) //joelho
		{
			opCode[i*2] = 2; Add1[i*2] = rand()%180 - 90; Add2[i*2] = 3; Add3[i*2] = -1;
			opCode[i*2+1] = 1; Add1[i*2+1] = 2; Add2[i*2+1] = 3; Add3[i*2+1] = 2;
		}

		else if(local%4 == 2) //calcanhar
		{
			opCode[i*2] = 2; Add1[i*2] = rand()%180 - 90; Add2[i*2] = 5; Add3[i*2] = -1;
			opCode[i*2+1] = 1; Add1[i*2+1] = 4; Add2[i*2+1] = 5; Add3[i*2+1] = 4;
		}
		else //dedos
		{
			opCode[i*2] = 2; Add1[i*2] = rand()%180 - 90; Add2[i*2] = 7; Add3[i*2] = -1;
			opCode[i*2+1] = 1; Add1[i*2+1] = 6; Add2[i*2+1] = 7; Add3[i*2+1] = 6;
		}
	}

	opCode[size-1] = -1; Add1[size-1] = -1; Add2[size-1] = -1; Add3[size-1] = -1;

	Instruction* program = createInstruction(opCode, Add1, Add2, Add3, size);

	delete[] opCode;
	delete[] Add1;
	delete[] Add2;
	delete[] Add3;

	return program;
}