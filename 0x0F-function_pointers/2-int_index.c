#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to seach in
 * @size: size of an array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cap function does not not return 0
 * or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!array || !cmp)
return (-1);

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (((*cmp)(array[i])) == 1)
return (i);
}
return (-1);
}
