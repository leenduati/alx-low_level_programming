#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int sum_all;

	for (a = 0; a < 1024; a++)
{
		if (a % 3 == 0 || a % 5 == 0)
			sum_all = sum_all + a;
}
	printf("%d", sum_all);
	printf("\n");
	return (0);
}

