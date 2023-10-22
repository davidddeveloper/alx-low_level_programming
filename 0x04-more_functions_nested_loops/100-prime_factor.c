#include <stdio.h>
/**
 * main - prints the largest prime factor
 * Return: 0 Success
 * WHILE i < n
 * if remainder of n / i === 0
 * quotient = i
 * i++
 * PRINT quotient
 */
int main(void)
{
	unsigned long i;
	unsigned long n, quotient;

	n = 612852475143;
	i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			quotient = i;
			while (n % i == 0)
				n /= i;
		}
		i++;
	}
	printf("\n%lu\n", quotient);
	return (0);
}
