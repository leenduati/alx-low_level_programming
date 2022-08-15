#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	while (i <= index)
	{
		temp->next = head;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}

