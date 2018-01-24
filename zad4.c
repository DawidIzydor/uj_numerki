/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int liczba = 6831552;
	int ograniczenie = (liczba/2)+1;
	int a=1;

	printf("Dzielniki liczby %d: ", liczba);

	for(;a<ograniczenie;a++)
	{
		if((liczba/a)*a == liczba)
			printf("%d, ", a);
	}
	printf("%d.", liczba);

	return 0;
}
