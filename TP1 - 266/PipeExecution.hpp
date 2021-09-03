#ifndef PipeExecution_hpp
#define PipeExecution_hpp

#include "DataMemory.hpp"
#include "InstMemory.hpp"

Instruction* instructionCounter(Instruction*, int);

int decodeInstruct(Instruction*);

void executeInst(dataMemo*, int, Instruction*, int);

#endif