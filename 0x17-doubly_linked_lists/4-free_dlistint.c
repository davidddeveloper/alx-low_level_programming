#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		free(current);
		head = head->next;
	}
	free(head);
}
