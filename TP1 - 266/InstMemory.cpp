#include "InstMemory.hpp"
#include <iostream>

using namespace std;

struct instruct
{
	int OPcode, addOne, addTwo, addThree;
};

Instruction* createInstruction(int* inOPCode, int* inAdd1, int* inAdd2, int* inAdd3, int arrSize)
{
	Instruction* program = new Instruction[arrSize];

	for(int i = 0; i<arrSize-1; i++)
	{
		program[i].OPcode = inOPCode[i];
		program[i].addOne = inAdd1[i];
		program[i].addTwo = inAdd2[i];
		program[i].addThree = inAdd3[i];
	}

	program[arrSize-1].OPcode = -1;
	program[arrSize-1].addOne = -1;
	program[arrSize-1].addTwo = -1;
	program[arrSize-1].addThree = -1;

	return program;
}

Instruction* concatInstructions(int size1, int size2, Instruction* inst1, Instruction* inst2)
{
	Instruction* newInst = new Instruction[size1+size2];
	for(int i = 0; i<size1; i++)
	{
		newInst[i].OPcode = inst1[i].OPcode;
		newInst[i].addOne = inst1[i].addOne;
		newInst[i].addTwo = inst1[i].addTwo;
		newInst[i].addThree = inst1[i].addThree;
	}

	for(int i = 0; i<size2; i++)
	{
		newInst[i+size1].OPcode = inst2[i].OPcode;
		newInst[i+size1].addOne = inst2[i].addOne;
		newInst[i+size1].addTwo = inst2[i].addTwo;
		newInst[i+size1].addThree = inst2[i].addThree;
	}

	return newInst;
}

int sendOPCode(Instruction* instruct)
{
	return instruct->OPcode;
}

int sendAddOne(Instruction* instruct)
{
	return instruct->addOne;
}

int sendAddTwo(Instruction* instruct)
{
	return instruct->addTwo;
}

int sendAddThree(Instruction* instruct)
{
	return instruct->addThree;
}

Instruction* instMemoPosition(Instruction* InstArray, int PC)
{
	Instruction* currInst = new Instruction;

	currInst->OPcode = InstArray[PC].OPcode;
	currInst->addOne = InstArray[PC].addOne;
	currInst->addTwo = InstArray[PC].addTwo;
	currInst->addThree = InstArray[PC].addThree;

	return currInst;
}

void deleteMemory(Instruction* instruct)
{
	delete[] instruct;
}

void deletePosMemory(Instruction* instruct)
{
	delete instruct;
}