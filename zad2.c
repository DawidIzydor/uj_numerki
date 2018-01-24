/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/
#include <stdio.h>
#include <stdlib.h>

int func1(int arg);
int func2(int arg);
int func3(int arg);

int main()
{
	int a = 0, b=0;
	int args[] = {0, 5, 3, 6, 2,  4, 21, 53, 22, 51, 81, 120, 23, 90, 1, 91, 18, 6, 11, 31};
		/* wygenerowane losowo :) */

	b = sizeof(args)/4;
	

	for(a = 0; a<b; a++)
	{
		printf("%d. Liczba: %d, wyniki:\n%d, %d, %d\n\n", (a+1), args[a], func1(args[a]), func2(args[a]), func3(args[a]));
	}
	return 0;
}

int func1(int arg)
{
	return arg*arg;
}

int func2(int arg)
{
	int wynik = 0;
	for(;arg>=0; arg--)
		wynik+=3.14;
	return wynik;
}

int func3(int arg)
{
	return arg*func2(arg);
}
