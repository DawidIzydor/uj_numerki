/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/
#include <stdio.h>


int main()
{
	int ograniczenie = 100;
	double wynik=1, a=1, n, x=2;


	for(n=1;n<=ograniczenie; n++)
	{
		a*=(x/n);
		wynik+=a;
	}
	printf("Wynik: %f", wynik);
}


