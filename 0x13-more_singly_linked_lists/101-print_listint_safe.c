#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to listint_t list head
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (n);
}
