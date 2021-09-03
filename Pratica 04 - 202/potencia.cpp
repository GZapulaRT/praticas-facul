#include "potencia.hpp"

using namespace std;

int mathPower(int x, int y)
{
	if(y == 0)
		return 1;
	else if(y == 1)
		return x;
	else if(y%2 == 0)
		return mathPower(x*x, y/2);
	else
		return x*mathPower(x*x, y/2);
}
