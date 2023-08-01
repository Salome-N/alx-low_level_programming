#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to listint_t list head address
* @idx: index to new node to be added
* @n: int to be added to new node
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *c = *head;
	unsigned int p;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = c;
		*head = new;
		return (new);
	}

	for (p = 0; p < (idx - 1); p++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}

	new->next = c->next;
	c->next = new;

	return (new);
}
