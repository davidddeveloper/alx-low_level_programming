#include "main.h"

/**
 * main - prints the string of argument(s) passed to it
 * @argc: the number of arguments passed in the command line
 * @argv: an array holding the strings of argument
 * return: 0 - success
 */
int main(int argc, char **argv)
{
	while (argc--)

		printf("%s\n", *(argv++));

	return (0);
}
