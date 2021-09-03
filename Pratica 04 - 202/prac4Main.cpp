#include "potencia.hpp"
#include "inversor.hpp"
#include "binario.hpp"
#include <iostream>

using namespace std;

int main()
{
	int opt;
	cout << "Opções:\n\t1- Potencia\n\t2- Inversor\n\t3- Binario\n\n";
	cin >> opt;
	
	switch(opt)
	{
		case 1:
		{
			int x, y;
	
			cout << "Insira os valores de x e y (x^y):	";
			cin >> x >> y;
	
			int result = mathPower(x, y);
		
			cout << result << endl;
		}
			break;

		case 2:
		{
			int inv;
			cout << "Insira o valor para inverter:	";
			cin >> inv;
	
			int invert = invertInt(inv, 0);
	
			cout << invert << endl;
		}
		break;
		
		case 3:
		{
			int toBin;
			cout << "Insira o valor para converter a binario:	";
			cin >> toBin;
			
			int bin = decToBinary(toBin, 1);
			
			cout << bin << endl;
		}
	}	
	
	return 0;
}
