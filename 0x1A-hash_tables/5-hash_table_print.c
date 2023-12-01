#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table
* @ht: hash table
* Return: none
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, p = 0;

	printf("{");
	for (i = 0; ht && (i < ht->size); i++)
	{
		if (ht->array[i] != NULL)
		{
			if (p == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			p = 1;
		}
	}
	printf("}\n");
}
