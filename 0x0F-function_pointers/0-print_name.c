#include "function_pointers.h"
#include <string.h>

void print_name(char *name, void (*f)(char *))
{
	long unsigned i;
	for (i = 0; i < strlen(name); i++)
		_putchar(i);
	f(name);
}
