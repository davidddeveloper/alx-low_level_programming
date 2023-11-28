#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 - file created
 * -1 - file could not be created
 * -1 - file name is NULL
 */
int create_file(const char *filename, char *text_content)
{
	FILE *f;

	f = fopen(filename, "w");
	if (f != NULL)
	{
		if (text_content != NULL)
			fputs(text_content, f);
		fclose(f);
		return (1);
	}
	return (-1);
}
