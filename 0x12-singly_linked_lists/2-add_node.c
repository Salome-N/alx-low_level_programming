#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: ptr to head of list_t list
* @str: str to be added ti list_t list
* Return: address to new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dp;
	int ln;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dp = strdup(str);
	if (dp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (ln = 0; str[ln];)
		ln++;

	new->str = dp;
	new->len = ln;
	new->next = *head;

	*head = new;

	return (new);
}
