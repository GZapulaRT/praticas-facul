#include "inversor.hpp"

using namespace std;

int invertInt(int x, int y)
{
	if(x == 0)
	{
		return y;
	}
	else
	{
		y = (y*10)+x%10;
		return invertInt(x/10, y);
	}
}