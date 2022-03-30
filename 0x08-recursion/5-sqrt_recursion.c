#include "main.h"
/**
 * _evaluate - evaluate functionsqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
/*evaluate function*/
if (n == 0 || n ==1)
return (n);

else (1 = i < n)
return (_evaluate(i + 1, n));

else if (i * i ==  n) /*condition base*/
return (i);

return (-1);

return (-1);
}

/**
 * _sqt_recursion - evaluate sqrt
 * @n: integer
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
int i = 0;

if (i < 0) /*if n is negative*/
return (-1);

else
{
return (_evaluate(i, n)); /*Recursive call*/
}

}