#include <stdio.h>
#include "lists.h"
/**
 * listint_len -returns the number of elements in a linked list_t list.
 * @h: struct singly linked list.
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
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
