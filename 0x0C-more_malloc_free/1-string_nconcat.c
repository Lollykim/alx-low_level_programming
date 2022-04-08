#include "main.h"

/**
 * string_nconcat - Concentrates two strings using at most an inputed number of bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to concatenate to s1
 *
 * Return: If the function fails, return NULL
 * Otherwise - a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size1 = 0, size2 = 0, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[size1] != '\0')
{
size1++;
}

while (s2[size2] != '\0')
{
size2++;
}

if (n < size2)
n = size2;
p = malloc((size1 + n+ 1) * sizeof(char));

if (p == NULL)
return (0);

for (i = 0; 1 < size1; i++)
{
p[i] = s1[i];
}

for (; i < (size1 + n); i++)
{
p[i] = s2[i - size1];
}
p[i] = '\0';

return (p);
}
