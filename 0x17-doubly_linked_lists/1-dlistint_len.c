#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked
 * @h: doubly linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
