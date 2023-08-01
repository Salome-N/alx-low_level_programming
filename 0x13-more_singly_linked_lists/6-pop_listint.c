#include "main.h"

/**
* pop_listint - deletes the head node of a listint_t list
* & returns head node’s data (n)
* @head: pointer to the listint_t list head
* Return: head nodes data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
