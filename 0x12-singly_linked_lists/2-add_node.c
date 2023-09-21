#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: ptr to the head of list_t list
* @str:  string to be added to the lists_t list
* Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *c;
	int l;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	c = strdup(str);
	if (c == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l]; l++)
		l++;

	n->str = c;
	n->len = l;
	n->next = *head;

	*head = n;

	return (n);
}
