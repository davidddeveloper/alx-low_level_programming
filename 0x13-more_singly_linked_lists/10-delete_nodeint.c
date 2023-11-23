#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a particular index
 * @head: the start of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if succeded -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t idx;
	listint_t *temp, *current;
	
	current = malloc(sizeof(listint_t));
	current->next = NULL;
	temp = *head;
	idx = 0;
	while (temp != NULL)
	{
		if (index == idx)
		{
			current = temp->next;
			temp = NULL;
			print_listint(*head);
			free(temp);
			return(1);
		}
		idx++;
		temp = temp->next;
	}
	return (-1);
}
