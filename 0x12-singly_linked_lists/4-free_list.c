#include "lists.h"

/**
 * free_list - deallocate momory created for list
 * @head: the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
