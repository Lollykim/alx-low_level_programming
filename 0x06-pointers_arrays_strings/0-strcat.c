#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (*dest != 0) 
{
i++;
}
dest++;


j = 0;
while (src[j] != 0)
{
j++;
}

{
*dest = src[j];
dest++;
}
*dest = '\0';
dest -= (i + j);
return (dest);
}
