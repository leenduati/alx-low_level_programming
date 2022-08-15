#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint-function that adds node to start of a string
 *@head:this is a pointer that is defined by the structure declared in lists.h
 *@n: this is the new string attached at each instance
 *Return: Return a unsigned int which is a size_t(number of nodes)
 *int l = 0;
 *int i = 0;
 *Declared a size_t length which will store length of the strings
 *int i which is the loop integer
 *count which will count the nodes form 1
 *head = NULL
 *add_node(&head, "Alexandro");
 *add_node(&head, "Asaia");
 *add_node(&head, "Augustin");
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *temp;

	/**
	*create an empty nodewhich has attributes of main list
	*for appending items to a node. assign temp.n to n,
	*temp->next shouldpoint to head, where head started as NULL
	*/

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
