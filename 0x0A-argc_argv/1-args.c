#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: the number of arguments passed in the command line
 * @argv: an array holding the strings of argument
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d", argc);
	printf("\n");

	return (0);
}
