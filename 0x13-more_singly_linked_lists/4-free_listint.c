#include "lists.h"

/**
 * free_listint - frees a list
 * @head: start of the singled linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	free(head->next);
}
