#include <ridicareLaPutere.h>

void ridicareLaPutere(double numar, double puterea){
	
	double rezultat = 1;
	
	for (int i = 1, i <= puterea; i++)
	{
		rezultat = rezultat * numar;
	}
	
	return rezultat;
}
