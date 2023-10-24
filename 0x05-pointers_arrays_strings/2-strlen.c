#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: the sting
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
