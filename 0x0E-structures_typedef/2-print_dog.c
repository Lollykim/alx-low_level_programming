#include <stdio.h>
#include "dog.h"

/**
 * print_dog - will print info stored in dog
 * @d: pointer to dog structure
 *
 * Return:  nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d-> == NULL)
printf("Name: (nil)\n");

printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}
