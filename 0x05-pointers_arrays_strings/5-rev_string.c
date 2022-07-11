#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string- prints out a string as given in rev
 *@s : parameter passed*
 * Return: Always a (Success)
 */

void rev_string(char *s)
{
	int a;
	int p;

	p = strlen(s);

	for (a = p - 1; a >= 0; a--)
	{
		printf("%c", s[a]);
	}
	printf("\n");
}
