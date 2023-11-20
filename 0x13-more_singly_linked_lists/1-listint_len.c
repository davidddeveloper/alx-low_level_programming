#include "lists.h"

/**
 * listint_len - counts the number of elements in list
 * @h: start of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
