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
