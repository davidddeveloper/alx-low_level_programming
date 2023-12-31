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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
