#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key
* @ht:  hash table you want to look into
* @key: key you are looking for
* Return: value associated with the element or NULL if key is not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int i = key_index((const unsigned char *)key, ht->size);

	node = ht->array[i];
	if (node == NULL)
		return (NULL);

	return (node->value);
}
