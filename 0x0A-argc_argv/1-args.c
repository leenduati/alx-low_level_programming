#include "main.h"
#include <stdio.h>

/**
 *main-function that returns name of program
 *@argc: the number of arguments
 *@argv: the arguments themselves
 *Return: return 0
*/



int main(int argc, char **argv)
{
	int a;
	char count[];

	for (a = 0; a < argc; a++)
	{
		count = argv[a];
	}
	printf("%d\n",argc);
	return (0);
}
