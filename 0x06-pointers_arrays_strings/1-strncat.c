#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: A poniter to a character that will be chnaged
 * @src: A pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (*dest != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
j++;
}

{
*dest = src[j];
j++;
i++;
}

*dest = '\0';

return (dest);
}
