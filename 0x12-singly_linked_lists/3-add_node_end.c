#include "lists.h"

/**
 * add_node - adds a new node to the end of a linked list
 * @head: start of the node
 * @str: string to add
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
