#include "binario.hpp"

using namespace std;

int decToBinary(int x, int y)
{

	if(x == 0 || x == 1)
	{
		return y;
	}
	
	else
	{
		y = (y*10)+x%2;
		return decToBinary(x/2, y);
	}
}
