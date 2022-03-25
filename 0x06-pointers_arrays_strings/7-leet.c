#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a strings into 1337
 * @a: A pointer that will be changed
 * Return: Always 0
 */
char *leet(char *a)
{
char leet[] = "aAeEo0tT1L";
char chan[] = "4433007711";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{

for (j = 0; leet[j] != '\0'; j++)
{
if (a[i] == leet[j])
a[i] = chan[j];
}

}
return (a);
}
