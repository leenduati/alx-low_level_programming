#include "main.h"
#include <stdio.h>

/**
 * more_numbers -Prints from 0 to 9 w14 times
 *
 * Return: Always a (Success)
 */


void more_numbers(void)
{

	int c;

	int b;


	for (b = 0; b < 10; b++)
{
		for (c = 0; c < 15; c++)
{
			if (c >=  10)
{
				_putchar(c / 10 + 48);

}
			_putchar((c % 10) + 48);
}
		_putchar('\n');

}
}
