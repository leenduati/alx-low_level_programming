#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main-function that returns name of program
 *@argc: the number of arguments
 *@argv: the arguments themselves
 *Return: return 0
*/



int main(int argc, char **argv)
{
	int a, sum;

	for (a = 0; a < argc; a++)
		sum = sum + atoi(argv[a]);

	printf("%d\n", argc - 1);
	return (0);
}
