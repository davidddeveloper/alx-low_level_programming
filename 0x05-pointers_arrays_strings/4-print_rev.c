#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - Prints a string in the reverse order
 * @str: the strings
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
