#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointers block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

/*Declaring FOR*/
for (i = 0; i < n; i ++)
{
*(s + i) = b; /*add 1position s*/

} /*EBD FOR*/

return (s);
}
