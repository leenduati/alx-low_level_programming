#include "main.h"
#include <stdio.h>

/**
 * _isupper -Prints 1 is c is uppercase, else 0
 *@c : parameter passed*
 * Return: Always a (Success)
 */


int _isupper(int c)
{
	int a;

	a = 0;

	if (c >= 'A' && c <= 'Z')
	{
		a = 1;
		_putchar(a);
	}
	else
	{
		a = 0;
		_putchar(a);
	}
	return (a);
}
