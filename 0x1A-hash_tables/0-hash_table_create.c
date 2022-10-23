#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create- creates a hash_table
 *@size: size ofthe array
 *Return: returns a hash_table
**/

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_node_t **temp;
	hash_table_t *h;

	temp = malloc(sizeof(hash_node_t));
	h = malloc(sizeof(hash_table_t));

	h->size = size;
	h->array = temp;
	return (h);
}
