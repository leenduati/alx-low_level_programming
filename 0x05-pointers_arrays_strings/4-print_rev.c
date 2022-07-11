#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev- prints out a string as given in rev
 *@s : parameter passed*
 * Return: Always a (Success)
 */

void print_rev(char *s)
{
	int a;
	int p;

	p = strlen(s);

	for (a = p; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
