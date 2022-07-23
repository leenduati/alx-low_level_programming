#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main-function that returns name of program
 *@argc: the number of arguments
 *@argv: the arguments themselves
 *Return: return 0
*/



int main(int argc, char **argv)
{
	int a;
	int res = 0;

	if (argc > 2)
	{
		for (a = 1; a < argc; a++)
		{
			if ((isdigit(atoi(argv[a]))))
			{
				printf("Error\n");
				return (1);
			}
			res = res + atoi(argv[a]);
		}
		printf("%d\n", res);
		return (0);
	}
	else if (argc == 0)
	{
		printf("%d\n", 0);
	}
	return (0);
}
