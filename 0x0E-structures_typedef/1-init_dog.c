#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: The structure
 * @name: member of struct dog
 * @age: member of struct dog
 * @owner: member of struct dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
