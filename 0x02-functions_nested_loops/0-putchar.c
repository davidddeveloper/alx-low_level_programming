#include "main.h"
/*
 * main - print _putchar followed by a new line
 * return(0) - Success
 */
int _putchar(void)
{
	char value[10] = "_putchar";
	printf("%s\n", value);
	return (0);
}

int main(void)
{	
	_putchar();
	return (0);
}
