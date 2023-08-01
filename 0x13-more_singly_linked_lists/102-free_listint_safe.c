#include "lists.h"

/**
* free_listint_safe - free listint_t list safely
* @h: pointer to listint_t list head
* Return: size of list freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n, i;

	n = loop_listintl(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}
