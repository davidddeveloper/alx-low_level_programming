#include "lists.h"

/**
 * add_nodeint_end - adds a node the the end of a list
 * @head: start of the list singly linked list
 * @n: integer to add to list
 * Return: address of the new element,
 * or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
