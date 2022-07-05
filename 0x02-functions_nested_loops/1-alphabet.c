#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -Prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	/**
	* print_aphabet function - Prints the alphabet
	*
	* Return: Always 0 (Success)
	*/

	char a;
	/* Program */
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
