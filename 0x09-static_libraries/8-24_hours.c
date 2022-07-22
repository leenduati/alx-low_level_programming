#include "main.h"

/**
 * print_sign - check if the later is greater than, less than, or equal to zero
 *@c : parameter passed
 *
 * Return: 1 if its greater than 0, 0 if its 0, and -1 if its less than 1
 */

void jack_bauer(void)
{
	int a = 0;
	while (a <= 23)
{

		int b = 0;
		int c = 0;
		int d = 0;
		while (b <= 59)
{
			if (a < 10)

{				_putchar('0' + 0);
				_putchar('a' + 0);
}
			else
{
				c = a % 10;
				d = a /10;
				_putchar('d' + 0);
				_putchar('c' + 0);
}
			_putchar(':');
			if (b < 10)
{
				_putchar('0' + 0);
				_putchar('b' + 0);
}
			else
{
				c = b % 10;
				d = b / 10;
				_putchar('d' + 0);
				_putchar('c' + 0);
}
			b++;

		_putchar('\n');

		a++;
}
}
