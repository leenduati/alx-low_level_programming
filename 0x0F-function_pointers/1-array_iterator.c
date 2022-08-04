#include "function_pointers.h"

/**
 *array_iterator- function that executes a fn given in echa array elem
 *@array: the array itself
 *@size: size of the array
 *@action: the pointer to fn given
 *Return: return void
**/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned long int i;

		for (i = 0;  i < size; i++)
		{
			action(array[i]);
		}
	}
}
