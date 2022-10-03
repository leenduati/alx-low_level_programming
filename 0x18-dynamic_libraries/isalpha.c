#include "main.h"

/**
 * _isalpha - chek if the later is small case, numerical, uppercase or not.
 *@c : parameter passed
 *
 * Return: 1 if its small case, numerical, uppercase else 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 0 && c <= 9) || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
