#include "Power.hpp"
#include "Multiply.hpp"
#include "InstMemory.hpp"

using namespace std;

Instruction* power(int base, int power)
{
	Instruction* program;

	for(int i = 0; i<power; i++)
	{
		Instruction* part = multiplication(base*(base*i), base);
		program = concatInstructions((base+3)*i, base+3, program, part);
	}

	return program;
}