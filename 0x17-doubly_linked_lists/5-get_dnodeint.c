#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at index
 * @head: doubly the linked list
 * @index: the index of the node to get
 * Return: the node otherwise null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
