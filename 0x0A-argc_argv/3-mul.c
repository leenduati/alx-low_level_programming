#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main-function that returns name of program
 *@argc: the number of arguments
 *@argv: the arguments themselves
 *Return: return 0
*/



int main(int argc, char **argv)
{
	int a;
	int res = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			res = res * atoi(argv[a]);
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
