#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints the last half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = (len - 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
