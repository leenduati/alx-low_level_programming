#include "main.h"
#include "stdio.h"

/**
 *_puts_recursion -  prints string via recrsive function
 *@s: A pointer to an char that will be updated from src
 *Return: 0
 */


void _puts_recursion(char *s)
{
	/* Base Case */

	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	/* End of base case */

	_putchar(*s);
	_puts_recursion(s + 1);

}
