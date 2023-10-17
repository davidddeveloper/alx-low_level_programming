#include <stdio.h>
#include "2-largest_number.c"
/**
 * main - test the largest_number function
 * Return: 0 SUCCESS
 */
int main(void)
{
	int largest;
	printf("case 1 -98, 0, 918\n");
	largest = largest_number(-98, 0, 918);
	printf("largest number %d\n", largest);
	printf("case 2 918 -98 0\n");
	printf("largest number %d\n", largest_number(918, -98, 0));

	return (0);
}
