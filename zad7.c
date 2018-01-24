/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int i, ogr = 100;
	double x=1;

	for(i=0; i<=ogr; i++)
	{
		printf("%d. %f, ",i, x);
		x = cos(x);
		printf("%f\n", x);
	}

	return 0;
}

	
