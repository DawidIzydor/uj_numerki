/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a = 1, b = 2, c = 3, x1, x2, delta;

	delta = b*b - 4*a*c;

	if(delta == 0)
	{
		x1 = (-b)/(2*a);
		printf("Jedno rozwiazanie: %d", x1);
		return 0;
	}
	if(delta > 0)
	{
		x1 = (-b - delta)/(2*a);
		x2 = (-b + delta)/(2*a);
		printf("Dwa rozwiazania: %d, %d", x1, x2);
		return 0;
	}
	printf("Brak rozwiazan");
	return 0;
}
