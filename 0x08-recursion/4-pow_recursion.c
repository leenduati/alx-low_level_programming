#include "main.h"

/**
 *factorial -  returns factorial of a number
 *@n: Int to check factorial against
 *Return: 0
 */


int _pow_recursion(int x, int y)
{
	/* Base Case */

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	/* End of Base Case */

	return (x * _pow_recursion(x, y -1));
}
