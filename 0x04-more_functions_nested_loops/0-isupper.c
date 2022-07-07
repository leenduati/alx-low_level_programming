#include "main.h"
#include <stdio.h>

/**
 * _isupper -Prints 1 is c is uppercase, else 0
 *@c : parameter passed*
 * Return: Always a (Success)
 */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
