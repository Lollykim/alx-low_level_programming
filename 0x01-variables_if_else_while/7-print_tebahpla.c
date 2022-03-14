#include <stdio.h>
/**
 * main - program that prints the lower alphabet in reverse
 *
 * Return; 0 if Success
 */
int main(void)

{
char alphabet;

for (alphabet = 122 ; alphabet >= 97 ; alphabet++)
{
putchar(alphabet);
}

putchar('\n');
return (0);

}
