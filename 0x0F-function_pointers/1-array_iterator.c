#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function on an array
 * @array: array
 * @size: size of array
 * @action: pointer to function need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (!array || !action)
return;
for (i = 0; i < size; i++)
(*action)(array[i]);
}
