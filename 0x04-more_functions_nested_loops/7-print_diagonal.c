#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: A number that specifies how many times \ should be printed out
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			_putchar(' ');

		_putchar('\\');
		if (i != 9)
			_putchar('\n');
	}
	if ((n <= 0))
		_putchar('\n');
}
