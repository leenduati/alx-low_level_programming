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


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp, *res;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp = *head;
	res = *head;

	while (res->next != NULL)
	{
		res = res->next;
		count++;
	}

	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp && count >= idx)
		return (temp);
	else
		return (NULL);
	free(temp);
}

