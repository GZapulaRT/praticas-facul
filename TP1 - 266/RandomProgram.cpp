#include<iostream>
#include<cstdlib>
#include "InstMemory.hpp"

using namespace std;

Instruction* randomSum()
{
	int numOfSums = rand() % 1000;

	int *opCode, *Address1, *Address2, *Address3;

	opCode = new int[numOfSums];

	Address1 = new int[numOfSums];
	Address2 = new int[numOfSums];
	Address3 = new int[numOfSums];

	for(int i = 0; i< numOfSums-1; i++)
	{
		opCode[i] = (rand()%2)+1;
		Address1[i] = rand()%10000;
		Address2[i] = rand()%10000;
		Address3[i] = rand()%10000;
	}

	opCode[numOfSums-1] = -1;
	Address1[numOfSums-1] = -1;
	Address2[numOfSums-1] = -1;
	Address3[numOfSums-1] = -1;

	delete[] opCode;
	delete[] Address1;
	delete[] Address2;
	delete[] Address3;

	Instruction* randomSumProg = createInstruction(opCode, Address1, Address2, Address3, numOfSums);

	return randomSumProg;
}