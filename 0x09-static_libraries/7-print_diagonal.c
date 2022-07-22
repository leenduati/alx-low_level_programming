#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -Prints \ given the number of times
 *@n: parameter to increase/decrease with the printing
 * Return: Always a (Success)
 */


void print_diagonal(int n)
{
	int a;

	int b;

	if (n <= 0)
		_putchar('\n');
	else
{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
