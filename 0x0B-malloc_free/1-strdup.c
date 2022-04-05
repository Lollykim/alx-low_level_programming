#include "main.h"
/**
 * _strlem - count array
 * @s: array of elements
 * Return: 1
 */

int _strlem(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /*count character of fstring*/
{
i++;
}

return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strdup - array foor prints a string
 * @str: array of elemnt
 * Return: pointer
 */
char
