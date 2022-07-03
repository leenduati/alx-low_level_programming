#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int a;
	int b;
	int c;
	for (a = 0; a < 10; a++)
{
		for (b = 0; b < 10; b++)
{
			putchar('\n');
			for (c = 0; c < 10; c ++)
{
				putchar(a + '0');
				putchar (b + '0');
				putchar(c + '0');
}
		putchar('\n');
}
			putchar('\n');
}
	return (0);
}

