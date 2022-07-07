#include "main.h"
#include <stdio.h>

/**
 * print_line -Prints - given the number of times
 *@n: parameter to increase/decrease with the printing
 * Return: Always a (Success)
 */


void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
{
		for (a = 0; a <= n; a++)
			_putchar('_');
		_putchar('\n');
}
}
