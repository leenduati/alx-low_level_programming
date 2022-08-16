#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *get_nodeint_at_index-returns the nth node of a listint_t linked list.
 *@head: this is the list given
 *@index: index that is needed
 *Return: return the list at that particular index
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp, *res;

	temp = malloc(sizeof(listint_t));
	res = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp = head;
	res = head;

	while (res->next != NULL)
	{
		res = res->next;
		count++;
	}

	if (index > count)
	{
		temp = NULL;
	}
	while (temp->next != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
	free(temp);
}

