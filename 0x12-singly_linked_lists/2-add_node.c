#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_node-function that adds node to start of a string
 *@head:this is a pointer that is defined by the structure declared in lists.h
 *@str: this is the new string attached at each instance
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

list_t *add_node(list_t **head, const char *str)
{

	list_t *temp;

	/**
	*create an empty nodewhich has attributes of main list
	*initialize length, this will be looped to increment as length of string
	*for appending items to a node. assign temp.len to length,
	*the new pointer temp.str should hold a copy of main string
	*temp->next shouldpoint to head, where head started as NULL
	*/


	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
