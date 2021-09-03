#include <ctime>
#include <cstdlib>
#include <iostream>
#include "DataMemory.hpp"

using namespace std;

struct dMemo
{
	int sMemory;
};

dataMemo* createMemory() //criar a memória com as posições
{
	dataMemo* dataMemory = new dataMemo[10000];

	makeMemoryJunk(dataMemory);

	return dataMemory;
}

void makeMemoryJunk(dataMemo* dataMemory)
{
	srand(time(0)); //criar seed nova para algoritmo de aleatório

	for(int i = 0; i< 10000; i++)
	{
		dataMemory[i].sMemory = rand() % 1001; //criar lixo num escopo mais controlado pra evitar valor excessivo
	}
}

void putData(dataMemo* dataMemory, int address, int value)
{
	dataMemory[address].sMemory = value; //inserir valor na memória
}

int getData(dataMemo* dataMemory, int address)
{
	return dataMemory[address].sMemory; //retornar valor da memória
}

void print(dataMemo* dataMemory, int MemSize)
{
	for(int i = 0; i<MemSize; i++)
		cout << dataMemory[i].sMemory << endl; //imprimir a memória relevante
}


void deleteDMemory(dataMemo* dataMemory) //deletar a memória dinamicamente
{
	delete[] dataMemory;
}