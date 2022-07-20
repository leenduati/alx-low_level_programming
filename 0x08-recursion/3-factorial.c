#include "main.h"

/**
 *factorial -  returns factorial of a number
 *@n: Int to check factorial against
 *Return: 0
 */


int factorial(int n)
{
	/* Base Case */

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);
	/* End of Base Case */

	return (n * factorial(n - 1));
}
