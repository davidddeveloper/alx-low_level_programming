#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * ----------------pseudocode-----------------
 *  outer loop 24 times
 *  outer loop tracks hours
 *  inner loop 60 time
 *  inner loop tracks munites
 *  i = 0
 *  j = 0
 *  WHILE i < 24
 *  	WHILE j < 60
 *  		if i > 9 && j > 9
 *  			PRINT i:j //e.g. output: 00:09
 *  		else if j > 9
 *  			PRINT 0i:j
 *  		else if i > 9
 *  			PRINT i:0j
 *  		j++;
 *  	i++;
 *  	j = 0;
 */
void jack_bauer(void)
{
	int i, j, a, b;

	i = j = 0;
	while (i < 24)
	{
		while (j < 60)
		{
			if (i > 9 && j > 9)
			{
				a = i % 10;
				b = j % 10;
				_putchar((i / 10) + '0');
				_putchar(a + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar(b + '0');
			}
			else if (j > 9)
			{
				b = j % 10;
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar(b + '0');
			}
			else if (i > 9)
			{
				a = i % 10;
				_putchar((i / 10) + '0');
				_putchar(a + '0');
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
