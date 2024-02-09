#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: represents a structure hash table
 * @key: is the key
 * @value: the data
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	/* Create the data */
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));
	hash_node_t *current_node;

	/* if memory has not been allocated for the table */
	if (ht == NULL)
	{
		free(node);
		return (0);
	}
	/* handle if malloc failed */
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	/* generates an index key */
	index = key_index((unsigned char *)node->key, ht->size);

	/* checks that the position of the table is empty */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node; /* inserts the data to the table */
		return (1);
	}
	/* handle collision */
	current_node = ht->array[index];
	if (current_node->key != node->key)
	{
		node->next = current_node;
		current_node = node;
		ht->array[index] = current_node;
	}
	else
	{
		/*free(node->key);
		free(node->value);
		free(node);
		free(current_node->value);*/
		current_node->value = (char *)value;
	}
	return (1);
}
