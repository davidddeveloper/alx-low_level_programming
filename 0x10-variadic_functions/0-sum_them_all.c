#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all parameters
 * @n: no of parameters
 * Return: 0 if n == 0 otherwise the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum, count, i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	count = n;
	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
