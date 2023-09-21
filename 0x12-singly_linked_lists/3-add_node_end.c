#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: ptr to the heast of list_t list
* @str: string to be added to the list_t list
* Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *c;
	int l;
	list_t *n, *l_node;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	c = strdup(str);
	if (c == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	n->str = c;
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
		*head = n;
	else
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = n;
	}

	return (*head);
}
