#include <stdio.h>
/**
 * main - prints the largest prime factor
 * Return: 0 Success
 * WHILE i < n
 * if n % i === 0
 * quotient = n / i;
 * i++
 * PRINT quotient
 */
int main(void)
{
	unsigned long i;
	unsigned long n, quotient;

	n = 612852475143;
	i = 1;
	while (i < n)
	{
		printf("inside loop");
		if (n % i == 0)
			quotient = i;
		i++;
	}
	printf("\n%lu\n", quotient);
	return (0);
}
