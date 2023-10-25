#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to reverse
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, b[98];

	for (i = 1; i <= n; i++)
		b[n - i] = a[i - 1];
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
