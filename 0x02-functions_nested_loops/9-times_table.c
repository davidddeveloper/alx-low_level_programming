#include "main.h"
/**
 * times_table - prints the 9 times table
 * --------------pseudocode--------------
 *  outer loop 10 times
 *  track rows
 *  inner loop 10 times
 *  track columns
 *  i = 0
 *  j = 0
 *  WHILE i <= 9
 *  	WHILE j <= 9
 *  		product = i * j
 *  		PRINT product
 *  		increment j by 1
 *  	PRINT newline
 *  	increment i by 1
 */
void times_table(void)
{
	int i, j;
	int product;

	i = j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (product <= 9)
				_putchar(product + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
