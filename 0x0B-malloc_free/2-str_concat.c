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
	char *res;
	int a, i;
	int ln_1;
	int ln_2;

	if (s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
	}
	if (s2 == NULL && s1 != NULL)
	{
		s2 = "";
	}

	ln_1 = strlen(s1);
	ln_2 = strlen(s2);
	res = malloc((ln_1 + ln_2) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ln_1; a++)
	{
		res[a] = res[a] + s1[a];
	}
	printf("a is %d\n", a);

	for (i = 0; i <= (a + ln_2); i++)
	{
		res[a + i] = s2[i];
	}
	return (res);
}
