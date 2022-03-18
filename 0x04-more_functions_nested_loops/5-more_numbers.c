#include "main.h"
/**
 * more_numbers - print 10 times the numbers, form 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
int i;
int k;
int n;
int r;

i = 0;
r = 0;
while (i < 10)
{
while (r <= 14)
{
if (r < 10)
{
n = r;
}

else
{
k = r / 10;
n = r % 10;
_putchar (k + '0');
}

_putchar (n + '0');

r++;
}
i++;
r = 0;
_putchar ('\n');
}

}

