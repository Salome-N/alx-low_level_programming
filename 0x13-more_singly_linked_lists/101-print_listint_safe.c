#include "lists.h"

size_t loop_listintl(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* loop_listintl - counts no. of unique nodes
* @head: pointer to listint_t list head
* Return: no. of unique nodes
*/

size_t loop_listintl(const listint_t *head)
{
	const listint_t *s, *f;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	s = head->next;
	f = head->next->next;

	while (f)
	{
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				n++;
				s = s->next;
				f = f->next;
			}

			s = s->next;
			while (s != f)
			{
				n++;
				s = s->next;
			}
			return (n);
		}

		s = s->next;
		f = f->next->next;
	}

	return (0);
}

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
