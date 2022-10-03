#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memcpy -  copies src into dest
 *@dest: A pointer to an char that will be updated from src
 *@src: A pointer to a chat that will be copied
 *@n: value
 *Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
