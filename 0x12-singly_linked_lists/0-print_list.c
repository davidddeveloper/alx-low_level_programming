#include "lists.h"

/**
 * print_list - Prints the node in a linked list
 * @h: pointer to the node structure
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp = h;

	i = 0;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len > 0 && temp->str != NULL ? temp->len : 0,
				temp->str == NULL ? "(nil)" : temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
