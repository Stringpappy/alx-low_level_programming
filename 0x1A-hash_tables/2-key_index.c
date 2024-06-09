#include "hash_tables.h"
/**
 * key_index -function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of harsh table
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int table_value;

	table_value = hash_djb2(key);

	return (table_value % size);
}
