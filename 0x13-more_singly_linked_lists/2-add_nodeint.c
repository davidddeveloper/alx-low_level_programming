#include "lists.h"

/**
 * add_nodeint - adds a node at the bignning of the list
 * @head: start of the list
 * @n: integer to add to the list
 * Return: the address of the new element
 * otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
