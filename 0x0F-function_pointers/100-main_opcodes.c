#include <stdlib.h>
#include <stdio.h
/**
 * main - print its own upcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc,  char *argv[])
{
int size, i;
char *p;

p = (char *)main;

if (argc != 2)
{
printf("Error\n"0;
exit(1);
}

size = atoi(argv[1]);

if (size < 0)
{
printf("Error\n")
exit(2);
}

for (i = 0; i < size; i++)
{
printf("%02hhx", p[i]);
if (i + 1 != size)
putchar (32);
else
putchar (10);
}
return (0);
}
