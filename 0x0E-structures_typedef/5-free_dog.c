#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - will free memory out newly created dog
 * @d: pointer to newly create dog
 *
 * Return: pointer to new dog information
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
