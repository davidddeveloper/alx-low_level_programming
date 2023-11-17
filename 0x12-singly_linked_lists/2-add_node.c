#include "lists.h"

/**
 * add_node - adds a new node at the biginning of a linked list
 * @head: start of the node
 * @str: string to add
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;

	*head = new;

	return (new);
}
