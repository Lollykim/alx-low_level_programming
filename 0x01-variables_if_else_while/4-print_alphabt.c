#include <stdio.h>
/**
 * main - entry point
 *
 * Return; 0 if Success
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar (alphabet);
}

putchar ('\n');

return (0);
}

