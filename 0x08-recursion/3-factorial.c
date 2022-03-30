#include "main.h"
/**
 * _factoial - factorial of a gien number
 * @n: pointers block of memory to fill
 * Return: factorial
 */

int factorial(int n)
{
if (n == 0) /*Base condition*/

return (1);

else if (n < 0) /*Basw condition*/
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/

}
