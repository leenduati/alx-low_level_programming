#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list-function that prints all the elements of a list_t list.
 *@h:this is a pointer that is defined by the structure declared in lists.h
 *Return: Return a unsigned int which is a size_t(number of nodes)
*/



size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i = 0;
	int count = 1;

	/*
	 * Declared a size_t length which will store length of the strings
	 * int i which is the loop integer
	 * count which will count the nodes form 1
	 */

	if (h->str == NULL)
	{
		/**
		 *if string is null, print null then assign h to next value
		 */

		printf("[%ld] (nil)\n", len);
		h = h->next;
		count++;
	}
	while (h->str[i] != '\0')
	{
		len++;
		i++;
	}

	printf("[%ld] %s\n", len, h->str);

	while (h->next != NULL)
	{
		h = h->next;
		printf("[%ld] %s\n", len, h->str);
		count++;
	}


	/*
	 * printf("[%ld] %s\n", len, h->str);
	*/

	return (count);
}
