#include "main.h"
#include <string.h>

/**
 *_puts_recursion -  prints string via recrsive function
 *@s: A pointer to an char that will be updated from src
 *Return: 0
 */


void _print_rev_recursion(char *s)
{
	/* Base Case */


	if (*s == '\n')
	{
		_putchar('l');
		return;
	}

	/* End of base case */

	_putchar(s[a]);

	_print_rev_recursion(s + 1);

}
