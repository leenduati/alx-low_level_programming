#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array- prints all elements in an array
 *@a : parameter passed*
 *@n : parameter passed*
 * Return: Always a (Success)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
