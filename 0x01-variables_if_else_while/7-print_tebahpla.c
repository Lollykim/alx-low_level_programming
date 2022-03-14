#include <stdio.h>
/**
 * main - program that prints the lower alphabet in reverse
 *
 * Return; 0 if Success
 */

 int main(void)
{
char a;

for (a = 122 ; a >= 97 ; a--)
{
putchar(a);
}

putchar('\n');
return(0);
}
