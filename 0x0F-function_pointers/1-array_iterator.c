#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as parameter on each element of an array
 * @array: Array of integers
 * @size: Size of array
 * @action: Pointer to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
		action(*(array++));
}
