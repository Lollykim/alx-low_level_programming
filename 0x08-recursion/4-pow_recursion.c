#include "main.h"

/**
 * _pow_recursion - retuns the value of x raised to the power of y
 * @x: is the base
 * @y: is the power
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
int pow = 0;

if (y < 0) /*Base condition*/
return (-1);

else if (y == 0)
return (1);

else
{
pow = (x * pow_recursion(x, y -1)); /*Recursive call*/
return (pow);
}

}
