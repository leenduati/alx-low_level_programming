#include "main.h"

/**
 *_pow_recursion -  returns power of a number
 *@x: Int to check factorial against
 *@y: power value
 *Return: the value to the power
 */


int _pow_recursion(int x, int y)
{
	/* Base Case */

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	/* End of Base Case */

	return (x * _pow_recursion(x, y - 1));
}
