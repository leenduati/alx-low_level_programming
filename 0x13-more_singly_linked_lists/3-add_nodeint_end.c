#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end-function that pushes last element to alinked list.
 *@head:this is a pointer that is defined by the structure declared in lists.h
 *@n: this is the number int n whic is in the struct created
 *Return: Return a unsigned int which is a size_t(number of nodes)
 *int l = 0;
 *int i = 0;
 *Declared a size_t length which will store length of the strings
 *int i which is the loop integer
 *count which will count the nodes form 1
 *head = NULL
 *add_node_end(&head, "Alexandro");
 *add_node_end(&head, "Asaia");
 *add_node_end(&head, "Augustin");
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;


	/**
	 * for pushing to last elem, we need first to allocate temp.str to the strcopy
	 * then assigning head mem all to vary of temp
	 * at each instance, we will add/push new node to the end
	*/
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
