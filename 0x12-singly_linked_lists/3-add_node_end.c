#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: ptr ti head of list_t list
* @str: string to be added in list_t list
* Return: address to new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	d = strup(str);
	if(str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l])
		l++;

	new->str = d;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
