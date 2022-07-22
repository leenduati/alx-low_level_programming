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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
