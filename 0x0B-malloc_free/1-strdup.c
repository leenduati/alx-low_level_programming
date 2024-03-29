#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - Creates another instance of the string
 *@str: str that will be duplicated
  *Return: p
 */



char *_strdup(char *str)
{
	char *p;
	int a;
	int ln;

	if (str == NULL)
	{
		return (NULL);
	}

	ln = strlen(str);

	p = malloc((ln + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= ln; a++)
	{
		p[a] = str[a];
	}
	return (p);
	free(p);
}
