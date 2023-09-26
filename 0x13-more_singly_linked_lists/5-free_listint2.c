#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: ptr to the listint list
* Return: zero
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
