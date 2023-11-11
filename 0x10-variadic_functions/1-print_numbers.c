#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed as parameter
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to print_numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && separator[0] != '\0' && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
