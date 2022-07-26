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
	int ln = strlen(str);
	int a;

	p = malloc((ln) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ln; a++)
	{
		p[a] = str[a];
	}
	return (p);
	free(p);
}
