#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to listint_t list head address
* Return: ptr to first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *b;

	if (head == NULL || *head == NULL)
		return (NULL);

	b = NULL;

	while ((*head)->next != NULL)
	{
		f = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = f;
	}

	(*head)->next = b;

	return (*head);
}
