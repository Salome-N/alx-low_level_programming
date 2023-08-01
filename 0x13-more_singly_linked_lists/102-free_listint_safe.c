#include "lists.h"

size_t loop_listintln(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
* loop_listintl - count unique nodes
* @head: pointer to listint_t list head
* Return: no. of unique nodes
*/

size_t loop_listintln(listint_t *head)
{
	listint_t *s, *f;
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
* free_listint_safe - free listint_t list safely
* @h: pointer to listint_t list head
* Return: size of list freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n, i;

	n = loop_listintln(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (n);
}
