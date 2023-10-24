#include "main.h"
#include "2-strlen.c" 
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j;
	char s2[1000];

	i = _strlen(s);
	while (i >= 0)
	{
		for (j = 0; j <= i; j++)
			s2[j] = s[i];
		s[i] = s2[i];
	}

}
