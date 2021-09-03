#ifndef InstMemory_hpp
#define InstMemory_hpp

typedef struct instruct Instruction;

Instruction* createInstruction(int*, int*, int*, int*, int);
Instruction* concatInstructions(int, int, Instruction*, Instruction*);
int sendOPCode(Instruction*);
int sendAddOne(Instruction*);
int sendAddTwo(Instruction*);
int sendAddThree(Instruction*);

Instruction* instMemoPosition(Instruction*, int);

void deleteMemory(Instruction*);
void deletePosMemory(Instruction*);

#endif