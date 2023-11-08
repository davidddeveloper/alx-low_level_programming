#ifndef DOG_H
#define DOG_H
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog = malloc(sizeof(*newdog));
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	if (newdog == NULL)
		return NULL;
	return newdog;
}
#endif
