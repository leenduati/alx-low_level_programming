#include "main.h"
#include <string.h>
#include <stdio.h>


char *_strchr(char *s, char c)
{
	int a;
	char *res;
	a = 0;


	while(!(s[a] == '\0'))
	{
		if (s[a] == c)
		{
			res = s  + a;
			break;
		}

		else
			res = s;
		a++;
	}

	if (res == s)
		res = NULL;
	return (res);
}
