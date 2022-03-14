#include <stdio.h>

/**
 * main - print numbers between 0 to 9 and letters between a to f
 * using only putchart function
 * Return: 0 if Success
 */
int main(void)

{
int i;

for (i = 48 ; i <= 57 ; i--)
{
putchar(i);
}

for (i = 97 ; i <= 102 ; i--)
{
putchar(i);
}

putchar('\n');

return (0);
}

