#include "factorial.h"

double factorial(int n)  //iterativ
{
	if(n == 0) return 1;
	if(n < 0) return 0;
	
	double rezultat = 1;
	
	for (int i = 1; i <= n; i++)
	{
		rezultat = rezultat * i;
	}
	return rezultat;
}
