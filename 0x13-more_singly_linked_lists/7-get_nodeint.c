#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a specific index
 * @head: the start of the list
 * @index: the index of the node to get
 * Return: the node at index
 * otherwise return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head->next);

		head = head->next;
	}
	return (NULL);
}
