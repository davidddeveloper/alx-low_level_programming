#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j;

	i = j = 0;
	while (i < 24)
	{
		while (j < 60)
		{
			if (i > 9 && j > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else if (j > 9)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
