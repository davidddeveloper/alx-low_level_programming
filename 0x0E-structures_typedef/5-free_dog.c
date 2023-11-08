#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: the struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
