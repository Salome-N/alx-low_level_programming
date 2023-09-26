#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index index of listint_t list
* @head: ptr of the address to the head of listint list
* @index: node to be deleted
* Return: one
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *c = *head;
	unsigned int i;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
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
