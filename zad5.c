/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/

#include <stdio.h>

int jestPierwsza(int liczba);

int main()
{
	int liczba = 20000;
	int a;

	for(a=1; a<liczba; a++)
	{
		if(jestPierwsza(a))
			printf("%d, ", a);
	}
	
	return 0;
}

int jestPierwsza(int liczba)
{
	int ograniczenie = (liczba)/2 + 1;
	int b;

	for(b=2; b<ograniczenie; b++)
	{
		if((liczba/b)*b == liczba)
			return 0;
	}
	return 1;
}
