#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint-function that prints all the elements of a listint_t list
 *@h: this is the struct/node that is checked
 *Return: Return the count of the elements
**/



size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h ==  NULL)
	{
		exit(1);
	}


	while (h)
	{
		if (h == NULL)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("%d\n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
