#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - Joins two strings together
 *@s1: str1 that will be duplicated
 *@s2: str2 that will be duplicated
 *Return: res
 */



char *str_concat(char *s1, char *s2)
{
	char *p1;
	char *p2;
	char *res;
	int a, i;
	int ln_1;
	int ln_2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	ln_1 = strlen(s1);
	ln_2 = strlen(s2);

	p1 = malloc((ln_1 + 1) * sizeof(char));
	p2 = malloc((ln_2 + 1) * sizeof(char));
	res = malloc((ln_1 + ln_2 + 1) * sizeof(char));

	if (p1 == NULL || p2 ==  NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ln_1; a++)
	{
		res[a] = res[a] + s1[a];
	}
	/* printf("a is %d\n", a); */

	for (i = 0; i <= (a + ln_2); i++)
	{
		res[a + i] = s2[i];
	}
	return (res);
	free(p1);
	free(p2);
	free(res);
}
