#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * return (0) - SUCCESS
 */
void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
