#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts- prints out a string as given
 *@str : parameter passed*
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
