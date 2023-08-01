#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: pointer to listint_t list head
* Return: 0
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
