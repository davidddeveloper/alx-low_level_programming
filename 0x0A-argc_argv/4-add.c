#include "main.h"
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: the number of arguments
 * @argv: the numbers to multiply
 * Return: 0 if no number was provided
 * otherwise 1 for success
 */
int main(int argc, char **argv)
{
	int sum, count;

	sum = 0;
	count = 1;
	while (count < argc)
	{
		if (atoi(argv[count]) > 0)
			sum += atoi(argv[count]);
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", sum);
	return (0);
}
