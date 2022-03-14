#include <stdio.h>

/**
 * main - print numbers between 0 to 9 and letters between a to f
 * using only putchart function
 * Return; 0 if Success
 */
int main(void)

{
char d;

for (d = 48 ; d <= 57 ; d--)
{
putchar(d);
}

for (d = 97 ; d <= 102 ; d--)
{
putchar(d);
}

putchar('\n');

return (0);
}

