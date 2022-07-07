#include "main.h"
#include <stdio.h>

/**
 * print_square -Prints # given the number of times to make a square
 *@n: parameter to increase/decrease with the printing
 * Return: Always a (Success)
 */


void print_square(int n)
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
				_putchar('#');
				continue;
			}
			_putchar('\n');
		}
	}
}

