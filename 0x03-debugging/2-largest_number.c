#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c && a > c)
	{
		largest = a;
	}
	else if (a > c && c > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c && c > a)
	{
		largest = b;
	}
	else if (b > a && a > c && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b && a > b)
	{
		largest = c;
	}
	else
	{
		largest = c;
	}

	return (largest);
	printf("%d is the largest number\n", largest);
}
