#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name of the person
 * @f: Pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
