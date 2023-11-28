#include "main.h"

/**
 * read_textfile - read text from a file
 * @filename: name of file to read from
 * @letters: the number of letters it should read and print
 * Return: actual number of letters read
 * or 0 if fail to open or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd = fopen(filename, "r");
	char str[2000];

	if (fd == NULL)
	{
		return (0);
	}
	else
	{
		while (fgets(str, letters, fd) != NULL)
			printf("%s", str);
		return (letters);
	}
	fclose(fd);
	return (0);
}
