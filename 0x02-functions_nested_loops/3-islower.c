#include "main.h"

/**
 * _islower - chek if the later is small case or not.
 *@c : parameter passed
 *
 * Return: 1 if its small case else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
