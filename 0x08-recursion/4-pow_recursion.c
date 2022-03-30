#include "main.h"
/**
 * _pow_recursion - retuns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: pow recursion
 */

int pow_recursion(int x, int y)
{
if (y < 0) /*Base condition*/
{
return (-1);
}

else if (y != 0)
return (x * pow_recursion(x, y -1)); /*Recursive call*/

else
return (1);
}
