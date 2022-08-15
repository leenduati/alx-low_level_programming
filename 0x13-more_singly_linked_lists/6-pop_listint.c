#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp ==  NULL)
	{
		return (0);
	}

	temp->next = *head;

	/** (**head).next = *head; */
	/* while (temp->next != NULL)
	{
		result = temp->n;
		temp = NULL;
		break;
	}
	*/

	free(head);
	return ((*head)->n);
}
