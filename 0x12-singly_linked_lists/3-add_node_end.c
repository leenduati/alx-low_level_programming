#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_node_end-function that pushes last element to alinked list.
 *@head:this is a pointer that is defined by the structure declared in lists.h
 *@str: this is the string thst ewilll be pushed
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

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	/**
	 * for pushing to last elem, we need first to allocate temp.str to the strcopy
	 * then assigning head mem all to vary of temp
	 * at each instance, we will add/push new node to the end
	*/

	temp->len = length;
	temp->str = strdup(str);
	*head = temp;
	temp->next = *head;
	return (temp);
}
