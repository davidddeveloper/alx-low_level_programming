#include "main.h"

/**
 * main - Prints its name
 * @argc: the number of command line arguments
 * @argv: an array containing the strings of arguments
 * Return: 0 - success
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
