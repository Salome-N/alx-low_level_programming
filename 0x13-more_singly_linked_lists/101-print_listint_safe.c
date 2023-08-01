#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to listint_t list head
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t n, i;

	n = loop_listintl(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
