#include "main.h"
/**
 * _isalpha - checks if a character is upper
 * @c: the character constant to be check
 *
 * Return: 1 is character is upper 0 otherwise
 */
int _isalpha(int c)
{
	int u, l;

	u = 'A';
	l = 'a';
	while (l <= 'z')
	{
		if (c == l)
			return (1);
		else if (c != l)
			while (u <= 'Z')
			{
				if (c == u)
					return (1);
				u++;
			}
		l++;
	}
	return (0);

}
