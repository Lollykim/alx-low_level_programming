#include "dog.h"
#include <stdio.h>

/**
 * print_dog - will print info stored in dog
 * @d: pointer to dog structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
printf("Name: %s\n", d->name);
else
printf("Name: %s\n", "(nil)");
if (d->age < 0)
printf("Age: %f\n", d->age);
else
printf("Age: %f\n", "(nil)");
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: %s\n", "(nil)");
}
}
