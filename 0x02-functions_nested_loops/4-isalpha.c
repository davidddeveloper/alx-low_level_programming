#include "main.h"
/**
 * _isalpha - checks if a character is upper
 * @c: the character constant to be check
 *
 * Return: 1 is character is upper 0 otherwise
 */
int _isalpha(int c)
{
	int l;

	l = 'A';
	while (l <= 'Z')
	{
		if (c == l)
			return (1);
		l++;
	}
	return (0);

}
