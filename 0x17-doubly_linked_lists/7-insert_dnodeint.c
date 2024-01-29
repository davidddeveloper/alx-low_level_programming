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
	dlistint_t *head = *h, *temp, *temp_two, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	i = 1;
	while (head != NULL)
	{
		if (i == idx)
			break;
		head = head->next;
		i++;
	}

	printf("value at idx - %d is %d", i, head->n);
	new_node->n = n;
	temp = (*h)->next;
	temp_two = (*h);
	new_node->next = temp;
	new_node->prev = temp_two;
	temp_two->next = new_node;
	new_node->prev = temp_two;
	
	return (new_node);
}
