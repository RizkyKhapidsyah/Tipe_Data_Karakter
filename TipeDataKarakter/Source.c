/*	Copyright (c) 2018 by Rizky Khapidsyah 
	Compiler & I.D.E : MS. Visual Studio 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define L_Strp "-"
#define L_NL "\n"

int i; 
char P[3];

void Garis(
	char *Param1, char *Param2, 
	int JkParam1, int JkParam2)
{
	for (i = 0; i <= JkParam1; i++)
	{
		printf("%s", 
			Param1);
	}
		for (i = 0; i <= JkParam2; i++)
		{
			printf("%s", 
				Param2);
		}
}

int main()
{
	Garis(L_Strp, L_NL, 39, 0);
		printf("Memory dari tipe data Char           : %i%s", sizeof(char), L_NL);
		printf("Memory dari tipe data Unsigned Char  : %i%s", sizeof(unsigned char), L_NL);
		printf("Memory dari tipe data Signed Char    : %i%s", sizeof(signed char), L_NL);
	Garis(L_Strp, L_NL, 39, 0);

	_getch();
	return 0;
}