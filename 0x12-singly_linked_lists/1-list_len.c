#include "lists.h"

/**
 * list_len - the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
