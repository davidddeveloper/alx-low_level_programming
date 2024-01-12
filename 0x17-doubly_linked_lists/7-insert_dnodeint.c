#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: doubly linked list
 * @idx: the index at which to insert
 * @n: the value to insert to the doubly linked list
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	i = 0;
	while ((*h) != NULL)
	{
		if (i = idx)
			break;
		*h = (*h)->next;
		i++;
	}

	new_node->n = n;
	new_node->next = h->prev;
	h->prev->next = new_node;
	h->prev = new_node;

	h = new_node;
	return (new_node);
}
