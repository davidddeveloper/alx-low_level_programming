#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Searches through an array for integers
 * @array: the array
 * @size: size of the array
 * @cmp: Pointer to a functio as arguments
 * Return: An integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;
	int *arr_ptr = array;

	while (size--)
	{
		elem = (cmp(98));
		if ((*(arr_ptr++)) == elem)
			return elem;
	}
	return -1;
}
