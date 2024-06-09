#include "hash_tables.h"
#define HASH_SIZE 1024
/**
 * *create_hash_node - Function to create a new hash table node
 * @key:
 * @value:
 * Return
 * */
hash_node_t *create_hash_node(const char *key, const char *value)
{
    hash_node_t *cr_node = malloc(sizeof(hash_node_t));
    if (!cr_node)
        return NULL;

    cr_node->key = strdup(key);
    if (!cr_node->key) {
        free(cr_node);
        return NULL;
    }

    if (value) {
        cr_node->value = strdup(value);
        if (!cr_node->value) {
            free(cr_node->key);
            free(cr_node);
            return NULL;
        }
    } else {
        cr_node->value = NULL;
    }

    cr_node->next = NULL;
    return cr_node;
}

#include "hash_tables.h"
/**
 * hash_function - func thatcalculate hash value
 * *key:
 * Return:
 */
unsigned int hash_function(const char *key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + *key++;
    }
    return hash % HASH_SIZE;
}


/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: ash table you want to add or update
 * @key: key
 * @value: value associated with the key
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int st;
	hash_node_t *cr_node;
       
	cr_node = create_hash_node(key, value);


	st = hash_function(key);

	if (!ht || !key || !*key)
		return (0);


	if (!cr_node)
		return (0);

	if (!ht->array[st])
	{
		ht->array[st] = cr_node;
		return (1);
	}
	cr_node->next = ht->array[st];
	ht->array[st] = cr_node;
	return (1);
}
