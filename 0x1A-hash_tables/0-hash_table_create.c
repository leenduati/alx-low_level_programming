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
	unsigned long int i;

	h = malloc(sizeof(hash_table_t));

	if (h == NULL)
	{
		return (NULL);
	}

	temp = malloc(size * sizeof(hash_node_t *));

	if (temp == NULL)
	{
		free(h);
		return (NULL);
	}



	h->size = size;
	h->array = temp;

	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	return (h);
}
