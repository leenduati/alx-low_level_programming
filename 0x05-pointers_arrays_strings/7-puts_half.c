#include "main.h"
#include <string.h>

/**
 * puts_half- prints out half of a string
 *@str : parameter passed*
 * Return: Always a (Success)
 */

void puts_half(char *str)
{
	int a;
	int p;
	int c;
	int d;
	int e;

	p = strlen(str);
	c = p / 2;
	d = (p - 1) / 2;

	if (p % 2 == 0)
	{

		for (a = c; a < p; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');

	}

	else
	{
		for (e = d; e < p; e++)
		{
			_putchar(str[e]);
		}
		_putchar('\n');
	}
}

