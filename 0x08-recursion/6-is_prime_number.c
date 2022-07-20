#include "main.h"

/**
 *prime_check - this is the recursive fnction we are running to get sqrt
 *is_prime_number - this is the function that calls the recursive fn
 *@a: Int to check if it is a prime number
 *@b: decrementer for every possible number till 0
 *Return: a call tothe recursive function
 */


int prime_check(long int a, long int b)
{

	if (a == 1)
		return (0);
	if (a <= 0)
		return (0);
	if (b > 1 && a % b == 0)
		return (0);
	if (b == 1)
		return (1);

	return (prime_check(a, b - 1));
}

/**
 *is_prime_number - this is the function that calls the recursive fn
 *@n: function that is being given as input
 *Return: a call to recursive function
*/


int is_prime_number(int n)
{

	return (prime_check(n, n / 2));
}
