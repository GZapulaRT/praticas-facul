#ifndef DataMemory_hpp
#define DataMemory_hpp

typedef struct dMemo dataMemo;

dataMemo* createMemory();

void makeMemoryJunk(dataMemo*);

void putData(dataMemo*, int, int);

int getData(dataMemo*, int);

void print(dataMemo*, int);

void deleteDMemory(dataMemo*);

#endif