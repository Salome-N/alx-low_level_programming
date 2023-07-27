#include "main.h"

/**
* free_list - free list_t list
* @head: ptr to list_t list
* Return: 0
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
