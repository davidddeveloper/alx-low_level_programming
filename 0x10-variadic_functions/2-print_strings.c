#include "variadic_functions.h"

/**
 * print_numbers - prints strings passed as parameter
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to print_numbers
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && separator[0] != '\0' && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
