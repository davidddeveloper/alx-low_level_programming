#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: start of the list
 * @idx: the index of the list where new node should be added
 * @n: integer value of the new node
 * Return: the new node
 * Null if node can't be added and idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *temp, *prev, *current, *new_node;
	(void)prev;

	current = malloc(sizeof(listint_t));

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	index = 0;
	temp = *head;
	while (temp != NULL)
	{
		if (index == idx)
		{
			current->next = temp->next;
			new_node->next = current;
			current = new_node;

			temp->next = NULL;
			print_listint(*head);
			printf("----End----\n");
			print_listint(current);
			printf("----end of curent----");
			temp = *head;
			print_listint(temp);
			printf("----------^-----------\n");
			while (temp->next != NULL)
				temp = temp->next;
			print_listint(temp);
			printf("...........................\n");
			temp->next = current;
			print_listint(*head);
			return (new_node);
		}
		index++;
		temp = temp->next;
	}
	return (NULL);
}
