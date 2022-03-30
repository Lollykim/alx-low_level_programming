#include "main.h"
/**
 * print_re_recursion - print a string in reverse
 * @s: pointer block of memory to fill
 * Return: void
 */

void print_rev_recursion(char *s)
{
if (*s) /*if statement*/
{
_print_rev_ecursion(s + 1); /*add s*/
_putchar(*s); /*print s*/
}
}
