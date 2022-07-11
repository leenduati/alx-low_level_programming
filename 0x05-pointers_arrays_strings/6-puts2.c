#include "main.h"
#include <string.h>

/**
 * print_rev- prints out a string as given in rev
 *@s : parameter passed*
 * Return: Always a (Success)
 */

void puts2(char *str)
{
	int a;
	int p;

	p = strlen(str);

	for (a = 0; a <= p; a--)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
