#include "main.h"

/**
 * main - multiply two numbers
 * @argc: the number of arguments
 * @argv: the numbers to multiply
 * Return: 1 if no number was provided
 * otherwise 0 for success
 */
int main(int argc, char **argv)
{
	int sum;

	if (argc <= 3)
	{
		printf("Error\n");
		return (10);
	}
	sum = argv[1] * argv[2];
	return (0);
}
