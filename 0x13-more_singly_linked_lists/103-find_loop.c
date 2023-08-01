#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to listint_t list head
* Return: address of where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	if (head == NULL || head->next == NULL)
		return (NULL);

	s = head->next;
	f = (head->next)->next;

	while (f)
	{
		if (s == f)
		{
			s = head;

			while (s != f)
			{
				s = s->next;
				f = f->next;
			}

			return (s);
		}

		s = s->next;
		f = (f->next)->next;
	}

	return (0);
}
