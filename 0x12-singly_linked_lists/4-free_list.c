#include "lists.h"

/**
* free_list - free list_t list
* @head: ptr to the head of list_t list
* Return: zero
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
