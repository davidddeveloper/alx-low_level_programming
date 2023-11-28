#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: path to file
 * @text_content: string to append
 * Return: 1 on seccess
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;

	f = fopen(filename, "a");
	if (f != NULL)
	{
		if (text_content != NULL)
			fputs(text_content, f);
		return (1);
	}
	return (-1);
}
