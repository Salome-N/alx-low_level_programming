#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: ptr to the head of the listint list
* @n: int to be added to the list
* Return: address to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *l_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		l_node = *head;
		while (l_node->next != NULL)
			l_node = l_node->next;
		l_node->next = node;
	}

	return (*head);
}
