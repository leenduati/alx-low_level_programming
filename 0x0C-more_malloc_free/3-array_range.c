#include <stdlib.h>
#include "main.h"

/**
 * array_range - array that contains numbers
 * from min to max.
 *
 * @min: first number.
 * @max: last number.
 * Return: pointer to array.
 **/

int *array_range(int min, int max)
{
	int i, elem, nb;
	int *p;

	if (min > max)
		return (NULL);

	elem = max - min + 1;
	p = malloc(sizeof(int) * elem);
	if (p == NULL)
		return (NULL);
	nb = min;
	for (i = 0; i < elem; i++)
	{
		p[i] = nb;
		nb++;
	}

	return (p);
}
