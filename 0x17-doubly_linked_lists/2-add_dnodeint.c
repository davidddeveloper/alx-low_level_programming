#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: doubly linked list
 * @n: the integer to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;

	(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
