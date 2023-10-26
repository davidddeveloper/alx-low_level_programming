#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: s
 */
char *string_toupper(char *s)
{
	int i, c;

	c = 'a';
	for (i = 0; s[i] != '\0'; i++)
		while (c <= 'z')
		{
			if (s[i] == c)
				s[i] = s[i] - 32;
			c++;
		}

	return (s);
}
