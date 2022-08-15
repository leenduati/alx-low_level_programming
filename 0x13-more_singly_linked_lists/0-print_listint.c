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
	size_t count = 1;

	if (h == NULL)
		return (1);
	while (h->next != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
		printf("%d\n", h->n);
	}
	return (count);
}
