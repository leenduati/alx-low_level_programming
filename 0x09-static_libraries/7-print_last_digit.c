#include "main.h"

/**
 * print_last_digit - print last digit
 *@c : parameter passed
 *
 * Return: Returns value of last digit
 */

int print_last_digit(int c)
{
	int a = c % 10;

	if (c < 0)
		a = a * -1;
	_putchar(a + '0');
	return (a);
}
