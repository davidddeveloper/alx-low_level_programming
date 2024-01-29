#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

	head = NULL;
}
