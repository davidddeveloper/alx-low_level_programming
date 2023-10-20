#include <stdio.h>
/**
 * prime_factor - prints the largest prime factor
 * WHILE i < n
 * 	if n % i === 0
 * 		quotient = n / i;
 * 	i++	
 * PRINT quotient		
 */
void prime_factor(void)
{
	int i;
	unsigned long long n, quotient;

	n = 612852475143;
	while (i < n)
	{
		if ((n % i) == 0)
			quotient = n / i;
		i++;
	}
	printf("Largest factor: %llu\n", quotient);
}

int main(void)
{
	prime_factor();
	return (0);
}
