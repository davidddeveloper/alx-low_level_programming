#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: destination to copies string
 * @src: the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
