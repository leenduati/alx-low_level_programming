#include "main.h"
#include <stdio.h>

/**
 * _isdigit -Prints 1 is c is uppercase, else 0
 *@c : parameter passed*
 * Return: Always a (Success)
 */


int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
