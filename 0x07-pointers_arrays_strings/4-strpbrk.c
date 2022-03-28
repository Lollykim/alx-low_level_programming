#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the c string to be scanned
 * @accept: character in the str1 that matches one one of the characters in str2
 * Return: string s that matches any character specifield in accept
 **/

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0') /*Declaring WHILE*/
{
j = 0;
while (accept[j] != '\0') /*Evaluate *accept*/
{
if (*s == accept[j])
{
return (s);
}

j++; /*add j+1*/
}

s++; /*add s+2*/
}
return (0);

}
