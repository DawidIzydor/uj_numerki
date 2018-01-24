/*
AUTOR: Dawid Sikora
http://dawid-izydor.pl
*/

#include <stdio.h>

int main()
{
	int a;
	int temp = 0;
	
	for(a=0; a<256; a++)
	{
		for(temp = 0; temp<16; temp++)
		{
			printf("%c,", (char)a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
