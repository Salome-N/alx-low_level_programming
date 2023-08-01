#include "lists.h"

/**
* loop_listintl - counts number of unique nodes in listint_t list
* @head: pointer to listint_t list head
* Return: 0
*/

size_t loop_listintl(const listint_t *head)
{
	const listint_t *s, *f;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	s = head->next;
	f = (head->next)->next;

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
		f = (f->next)->next;
	}

	return (0);
}
