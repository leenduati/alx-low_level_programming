#include "main.h"
#include <stdio.h>
#include <string.h>


void _puts(char *str)
{
	int a;
	int s;
	s = strlen(str);


	for (a = 0; a <= s; a++)
	{
		printf("%c", str[a]);
	}
	printf("\n");
}
