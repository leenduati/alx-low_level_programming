#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memset -  fills first n bytes of the mempry area pointed to by s
 *@s: A pointer to an char that will be updated
 *@b: A char that will be updated
 *@n: value
 *Return: 0
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
