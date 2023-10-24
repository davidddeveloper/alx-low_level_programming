#include "main.h"

/**
 * puts2 - prints every other character starting from 0 escaping the next character
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
