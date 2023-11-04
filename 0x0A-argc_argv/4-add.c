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
	int sum = 0;

	if (argc > 1)
	{
		while (argc--)
		{
			if (atoi(argv[argc]) > 0)
				sum += atoi(*argv++);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	printf("%d\n", 0);
	return (0);
}
