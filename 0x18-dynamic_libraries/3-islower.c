#include "main.h"
/**
 * _islower - checks if a character is lower
 * @c: the character constant to be check
 *
 * Return: 1 is character is lower 0 otherwise
 */
int _islower(int c)
{
	int l;

	l = 'a';
	while (l <= 'z')
	{
		if (c == l)
			return (1);
		l++;
	}
	return (0);

}
