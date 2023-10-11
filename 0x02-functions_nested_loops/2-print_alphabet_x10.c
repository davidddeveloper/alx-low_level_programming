#include "main.h"
/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 * return: 0 - success
 */
void print_alphabet_x10(void)
{
	int i, c;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
