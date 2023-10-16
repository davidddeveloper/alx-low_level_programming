#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start from
 */
void print_to_98(int n)
{
	do {
		if (n > 98)
		{
			if (n > 9)
			{
				if (n > 99)
				{
					int a;
					a = n / 10;
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else
					_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(n + '0');
			n--;
		}
		if (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(+n + '0');
			+n++;
		}
		_putchar(',');
		_putchar(' ');
	} while (n != 98);
	_putchar('\n');
}
