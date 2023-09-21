#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: list_t list
* Return: no. of elemenets
*/

size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}
