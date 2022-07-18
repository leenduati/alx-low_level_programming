#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned long  a;
	unsigned long  b;

	for (a = 0; a < strlen(haystack); a++)
	{
		for (b = 0; b < strlen(needle); b++)
		{
			if (!(haystack[a + b] == needle[b]))
				break;
		}
		if (b == strlen(needle))
			return (needle);
	}
	return (NULL);
}
