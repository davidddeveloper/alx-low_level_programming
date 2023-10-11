#include "main.h"
/**
 * isalpha2 - checks for alphabet
 * @c: character constant to be checked
 * Return: 1 character is alphabet 0 otherwise
 */
int _isalpha2(int c)
{
	char alp[200] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int i;
	i = 0;
	while (i != '\0')
	{
		if (alp[i] == c)
			return (1);
		i++;
	}
	return (0);
}
