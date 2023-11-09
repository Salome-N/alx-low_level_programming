#include "lists.h"

/**
* sum_dlistint - sum of all the data (n) of a dlistint_t linked list
* @head: ptr to the head of linked list
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
