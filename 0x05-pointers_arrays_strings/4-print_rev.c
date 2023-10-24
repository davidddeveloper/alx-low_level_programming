#include "main.h"

/**
 * print_rev - Prints a string in the reverse order
 * @str: the strings
 */
void print_rev(char *s)
{
	int i;

	i = '\0';
	while (s[i] != '0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
