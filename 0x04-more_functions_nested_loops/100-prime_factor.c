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
	printf("\n%llu\n", quotient);
}
