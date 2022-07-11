#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts- prints out a string as given
 *@str : parameter passed*
 * Return: Always a (Success)
 */

void _puts(char *str)
{
	int a;
	int s;

	s = strlen(str);
	for (a = 0; a <= s; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
