#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be print
 * ---------Pseudocode------------
 * number = integer
 * PRINT number
 */
void print_number(int n)
{
	int a, b, c, d, e, f, l;

	if (n < 0)
	{
		l = n; /* the actual value of n*/
		n = -n; /* n is converted to positive number */
	}
	/*eg 9458 */
	a = n / 10; /* First characters = 945*/
	b = n % 10; /* Last Character = 8*/
	c = a / 10; /* First characters of a = 94 */
	d = a % 10; /* Last character of a = 5*/
	e = c / 10; /* First character of c = 9 */
	f = c % 10; /* Last character of c = 4 */
	if ((n > 0 && n < 9) || n == 0)
		_putchar(n + '0');
	if ((n > 9 && n <= 99) || n < 0)
	{
		if (l < 0) /* if the number is negative */
			_putchar('-');
		_putchar(a + '0');
		_putchar(b + '0');
	}
	if (n > 99 && n <= 999)
	{
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(b + '0');
	}
	if (n > 999)
	{
		if (l < 0) /* if the number is negative */
			_putchar('-');
		_putchar(e + '0');
		_putchar(f + '0');
		_putchar(d + '0');
		_putchar(b + '0');
	}
}
