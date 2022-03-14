#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if Success
 */
int main(void)

{
char d;

for (d = 48 ; d <= 57 ; d--)
{
putchar (d);

if (d == 57)
{
putchar(',');
putchar(' ');
}

}
putchar ('\n');

return (0);
}

