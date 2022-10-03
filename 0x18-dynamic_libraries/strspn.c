#include "main.h"
#include <stdio.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	long unsigned int a;
	long unsigned int b;

	for(a = 0; a < strlen(s); a++)
	{
		for (b = 0; b < strlen(accept); b++)
		{
			if (s[a] == accept[b])
				printf("Hello");
		}
	}
	return (0);
}
