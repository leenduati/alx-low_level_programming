#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	char a;
	char b;
	/* Program */
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
