#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: pointer to listint_h list head
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
