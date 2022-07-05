#include "main.h"

/**
 * print_alphabet_x10 -Prints the alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	/**
	* print_alphabet times 10 function - Prints the alphabet
	*
	* Return: Always 0 (Success)
	*/

	char a;
	int b;
	/* Program */
	for (b = 0; b < 10; b++)
{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	_putchar('\n');
}
}
