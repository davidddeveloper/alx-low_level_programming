#include "main.h"
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: the number of arguments
 * @argv: the numbers to multiply
 * Return: 1 if no number was provided
 * otherwise 0 for success
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (10);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
