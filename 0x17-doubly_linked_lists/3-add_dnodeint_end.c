#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * head: doubly linked list
 * n: number to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last = *head;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last != NULL)
	{
		last = last->next;
	}
	last = new_node;

	return (new_node);
}
