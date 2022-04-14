#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variadic function that find the sum of ints
 * @n: total number of argument passed
 *
 * Return: Sum of argument passed as integers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

va_start(ap, n);
for (sum = 0; i = 0; i < n; i++)
{
sum += va_arg(ap, int);}
}
va_end(ap);
return (sum);
}
