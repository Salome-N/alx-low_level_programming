#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: ptr to the head of list_t list
* @str:  string to be added to the lists_t list
* Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int l;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	copy = strup(str);
	if (copy == NULL)
	{
		free(node);
		return (NULL);
	}

	for (l = 0; str[l]; l++)
		l++;

	node->str = copy;
	node->len = l;
	node->next = *head;

	*head = node;

	return (node);
}
