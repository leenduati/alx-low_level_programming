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
	char *res;
	a = 0;

	while (!(s[a] == '\0'))
	{
		if (s[a] == c)
		{
			res = s + a;
			break;
		}
		else
		{
			res = '\0';
		}
		a++;
	}
	return (res);
}
