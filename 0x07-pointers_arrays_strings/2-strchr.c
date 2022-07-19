#include "main.h"


/**
 *_strchr -  Returns a pointer to the first occurrence of c
 *@s: A pointer to an char that will be updated from src
 *@c: A char that will be copied
 *Return: res
 */


char *_strchr(char *s, char c)
{
	int a;

	a = 0;

	while (!(s[a] == '\0'))
	{
		if (!(s[a] == c))
		{
			return (NULL);
		}

		else
		{
			return (a + s);
			break;
		}
		a++;
	}

}
