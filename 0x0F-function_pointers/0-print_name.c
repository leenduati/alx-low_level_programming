#include "function_pointers.h"
#include <string.h>

/**
 *print_name- prints the name
 *@name: name given
 *@f: pointer to a function
 *Return: Void
**/


void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);
}
