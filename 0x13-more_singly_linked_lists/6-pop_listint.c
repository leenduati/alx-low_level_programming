#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint-unction that deletes  list's head node,and returns data
 *@head: this is the list itself
 *Return: return the result which is the value of list at n
*/



int pop_listint(listint_t **head)
{
	int result = 0;


	if (*head ==  NULL)
	{
		return (0);
	}

	if ((*head)->next == NULL)
	{
		result = (*head)->n;
		return (result);
		*head = NULL;

		/* return ((*head)->n);*/
	}

	/** (**head).next = *head; */
	while ((*head)->next != NULL)
	{
		result = (*head)->n;
		*head = (*head)->next;
		break;
	}

	return (result);
}
