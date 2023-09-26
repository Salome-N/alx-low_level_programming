#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: ptr to head of listint list
* @idx: index where the new node should be placed
* @n: int to be added in list
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *c = *head;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = c;
		*head = node;
		return (node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}

	node->next = c->next;
	c->next = node;

	return (node);
}
