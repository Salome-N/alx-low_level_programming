#include "lists.h"

/**
* free_listint_safe - free listint_t list safely
* @h: pointer to listint_t list head
* Return: size of list freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t l = 0;
	int d;

	if (h == NULL || *h == NULL)
		return (NULL);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			*h = temp;
			l++;
		}

		else
		{
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);

}
