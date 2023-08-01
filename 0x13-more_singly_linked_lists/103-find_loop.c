#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to listint_t list head
* Return: address of where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	if (head == NULL)
		return (NULL);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
