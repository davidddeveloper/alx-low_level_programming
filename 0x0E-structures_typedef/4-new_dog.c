#ifndef DOG_H
#define DOG_H
#include "dog.h"

/**
 * new_dog - creates a new struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *newdog;
	newdog = malloc(sizeof(dog_t));
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	if (newdog != NULL)
		return newdog;
	return NULL;
}
#endif
