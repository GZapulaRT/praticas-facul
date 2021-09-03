#include "PipeExecution.hpp"
#include "InstMemory.hpp"
#include "DataMemory.hpp"
#include <cstddef>

using namespace std;

Instruction* instructionCounter(Instruction* instruct, int PC)
{
	if(PC>=0)
		return instMemoPosition(instruct, PC);
	else
		return NULL;
}

int decodeInstruct(Instruction* i)
{
	if(i!= NULL)
		return sendOPCode(i);
	else
		return -1;
}

void executeInst(dataMemo* dataMemory, int OPcode, Instruction* currentInst, int PC)
{
	//Leitura de código de operação e execução de comando
	switch(OPcode)
	{
		case -1:
			{
				print(dataMemory, PC);
			}
			break;

		case 0: //comparar
			{
				int MAR1 = getData(dataMemory, sendAddOne(currentInst));
				int MAR2 = getData(dataMemory, sendAddTwo(currentInst));

				if(MAR1 == MAR2)
				{
					putData(dataMemory, sendAddThree(currentInst), PC/2); //comparaçao apos um comando executado
				}
			}
			break;

		case 1: //soma
			{
				int MAR1 = getData(dataMemory, sendAddOne(currentInst));
				int MAR2 = getData(dataMemory, sendAddTwo(currentInst));
			
				putData(dataMemory, sendAddThree(currentInst), MAR1+MAR2);
			}
			break;

		case 2: //inserir
			{
				putData(dataMemory, sendAddTwo(currentInst), sendAddOne(currentInst));
			}
			break;
	}
}