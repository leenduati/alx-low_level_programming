#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list-function that prints all the elements of a list_t list.
 *@h:this is a pointer that is defined by the structure declared in lists.h
 *Return: Return a unsigned int which is a size_t(number of nodes)
 *int l = 0;
 *int i = 0;
 *Declared a size_t length which will store length of the strings
 *int i which is the loop integer
 *count which will count the nodes form 1
*/


/**
 head = NULL
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

	temp->len = length;
	temp->str = strdup(str);
	*head = temp;
	temp->next = *head;
	return (temp);
}
