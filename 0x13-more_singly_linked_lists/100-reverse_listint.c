#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: ptr to address of head of listint list
* Return: ptr to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *l;

	if (head == NULL || *head == NULL)
		return (NULL);

	l = NULL;

	while ((*head)->next != NULL)
	{
		f = (*head)->next;
		(*head)->next = l;
		l = *head;
		*head = f;
	}

	(*head)->next = l;

	return (*head);
}
