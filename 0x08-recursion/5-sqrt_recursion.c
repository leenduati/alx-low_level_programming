#include "main.h"

/**
 *sqrt_num - this is the recursive fnction we are running to get sqrt
 *_sqrt_recursion - this is the function that calls the recursive fn
 *@a: Int to check square root against
 *@b: decrementer for every possible number till 0
 *Return: a call tothe recursive function
 */


int sqrt_num(int a, int b)
{
	if (a == 1)
		return (1);
	if (a <= 0 || b <= 0)
		return (-1);
	if (a / b == b && a % b == 0)
		return (b);

	return (sqrt_num(a, b - 1));
}

/**
 *_sqrt_recursion - this is the function that calls the recursive fn
 *@n: function that is being given as input
 *Return: a call to recursive function
*/


int _sqrt_recursion(int n)
{

	return (sqrt_num(n, n));

}
