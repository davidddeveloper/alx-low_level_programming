#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
