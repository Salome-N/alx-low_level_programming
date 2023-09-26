#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: ptr to the head of the listint list
* Return: zero
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
