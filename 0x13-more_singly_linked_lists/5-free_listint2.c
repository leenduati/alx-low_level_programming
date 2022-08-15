#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		*head = (*head)->next;
		*head = NULL;
	}
}
