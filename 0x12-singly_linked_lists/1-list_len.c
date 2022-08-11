#include <stdio.h>
#include "lists.h"
/**
 * list_len -returns the number of elements in a linked list_t list.
 * @h: struct singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
