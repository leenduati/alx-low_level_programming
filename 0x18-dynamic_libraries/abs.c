#include "main.h"

/**
 * _abs - Prints abs value of a number
 *@c : parameter passed
 *
 * Return: +ve int if number is greater or less than zero, and 0 otherwise
 */

int _abs(int c)
{
	if (c == 0)
{
		return (0);
}
	else if (c > 0)
{
		return (c);
}
	else
{
		c = c * -1;
		return (c);
}
}
