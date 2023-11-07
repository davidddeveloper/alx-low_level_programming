#include "dog.h"

/**
 * print_dog - prints a details about dog
 * @d: a structure holding the information about dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("okay");
		if (d->age == 0)
			printf("Yep age is valid");
	}
}

int main(void)
{
	struct dog dog;
	dog.name = "Bingo";
	print_dog(&dog);
	return (0);
}

