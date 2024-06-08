#include "hash_tables.h"
/**
 * hash_table_create - Func that Creates a hash table
 * @size: size of array
 * Return:  0 or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
       	hash_table_t *table;
	unsigned long int siz;

	table = NULL;
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
	return (NULL);
	}

	table->size = size;

	for (siz = 0; siz < size; siz++)
		table->array[siz] = NULL;

	return (table);
}
