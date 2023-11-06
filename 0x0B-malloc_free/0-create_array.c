#include "main.h"

/**
 * create_array - Creates an array using maloc
 * @size: array size
 * @c: character to pass to array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	arr = malloc(size);

	if (size == 0)
		return (NULL);

	else if (arr == NULL)
		return (NULL);

	while (size--)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
