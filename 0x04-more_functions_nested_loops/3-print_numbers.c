#include "main.h"
#include <stdio.h>

/**
 * print_numbers -Prints from 0 to 9
 *
 * Return: Always a (Success)
 */


void print_numbers(void)
{

	int c;

	for (c = 0; c < 10; c++)
		_putchar(c + '0');
	_putchar('\n');

}
