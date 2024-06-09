#include "hash_tables.h"
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
