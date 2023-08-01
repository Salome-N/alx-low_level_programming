#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index
* index of a listint_t linked list
* @head: pointer to listint_t list head
* @index: index to delete node
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *c = *head;
	unsigned int n;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	temp = c->next;
	c->next = temp->next;
	free(temp);
	return (1);
}
