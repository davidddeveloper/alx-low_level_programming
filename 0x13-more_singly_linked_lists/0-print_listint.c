#include "lists.h"

/**
 * print_listint - prints each item in a singly linked list
 * @h: first item in a list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	for(i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
