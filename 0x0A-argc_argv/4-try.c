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
			if (atoi(argv[a]) < '0' || atoi(argv[a]) > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res = res + atoi(argv[a]);
			}
		}
		printf("%d\n", res);
		return (0);
	}
	else if (argc < 1)
	{
		printf("%d\n", 0);
	}
	return (0);
}
