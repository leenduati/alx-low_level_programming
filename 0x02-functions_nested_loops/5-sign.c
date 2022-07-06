#include "main.h"

/**
 * print_sign - check if the later is greater than, less than, or equal to zero
 *@c : parameter passed
 *
 * Return: 1 if its greater than 0, 0 if its 0, and -1 if its less than 1
 */

int print_sign(int c)
{
	if (c == 0)
		return (0);
	else if (c > 0)
		return (1);
	else
		return (-1);
}
