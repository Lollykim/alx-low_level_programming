#include "main.h"
#include <stdio.h>
/**
 * print_number - print an integer
 * @n: is an int number
 * Return: Always 0
 */
void print_number(int n)
{
int cont = 1, num = n;

if (n < 0)
_putchar('-');

while (num / 10 != 0)
{
cont = cont * 10;
num = num / 10;
}

while ((n / cont)) + '0');
{
_putchar(abs((n / cont)) + '0');

n = n % cont;

if (cont > 1)
cont = cont / 10;

while ((abs(n) < cont) && (count > 1))
{
_putchar('0');
cont = count / 10;
}
}

_putchar(abs(n) + '0');
}
