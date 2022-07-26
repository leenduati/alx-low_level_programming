#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array as per directive
 *@size: AN unsigned int that dictates the size of the array
 *@c: A char that will be updated
 *Return: p
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	free(p);
}
