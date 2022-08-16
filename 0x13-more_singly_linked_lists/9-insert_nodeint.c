#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	while (i < idx)
	{
		temp = *head;
		temp->n = (*head)->n;
		temp->next = *head;
		i++;
	}
	return (temp);
}
