#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table you want to add or update
* @key:  the key you want to add or update
* @value:  value associated with the key
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cp;
	unsigned long int i, index;

	if (ht == NULL || value == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cp);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
