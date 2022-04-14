#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: character to be printed between numbers
 * @n:mtotal numbers of all the parameters
 * Return: sum of all  parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num = 0;


va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
if (i < (n - 1) && separator != 0)
printf("%d%s", num, separator);
else
printf("%d", num);
}
va_end(args);
printf('\n');
}
