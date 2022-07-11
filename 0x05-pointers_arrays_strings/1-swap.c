#include <stdio.h>


/**
 * swap_int- swaps the values of a and b
 *@a : parameter passed*
 *@b : parameter passed
 * Return: Always a (Success)
 */


void swap_int(int *a, int *b)
{

	int c;
	int d;

	c = *b;
	d = *a;

	*a = c;
	*b = d;
}
