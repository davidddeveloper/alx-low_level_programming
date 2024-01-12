#include "lists.h"

/**
 * sum_dlistint - sum up all data in a doubly linked list
 * @head: doubly linked list
 * Return: the sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
