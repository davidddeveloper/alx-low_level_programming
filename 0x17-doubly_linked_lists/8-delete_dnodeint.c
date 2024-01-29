#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: doubly the linked list
 * @index: the index of the node to get
 * Return: the node otherwise null
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			(*head)->next = (*head)->next->next;
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
