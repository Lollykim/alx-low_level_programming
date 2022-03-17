#include "main.h"
/**
 * _isupper - check if value is upper case
 *
 * @c: characyter to be checked
 *
 * Return: 1 if c is capital, 0otherwise 0
 **/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

else
{
return (0);
}

}
