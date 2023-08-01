#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to listint_t list
* Return: Number of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elem);
}
