#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 * otherwise return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid_point;
	size_t i;

	/* print array every time */
	printf("Searching in array: ");
	for (i = 0; i < (size - 1); i++)
		printf("%d, ", array[i]);
	printf("%d \n", array[i]);

	mid_point = (int)(size / 2);
	if (value != array[mid_point] && mid_point == 1 && value != array[0])
		return (-1);

	if (value > array[mid_point])
		return(binary_search(&array[mid_point], mid_point, value));
	else if (value < array[mid_point])
	{
		array[mid_point] = '\0';
		return(binary_search(array, mid_point, value));
	}
	else if (value == array[mid_point])
	{
		printf("what's up %d ", array[mid_point]);
		return (array[mid_point]);
	}
	else /* first value in array */
		return (array[0]);

	return(-1);
}
