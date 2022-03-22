#include "main.h"
/**
 * re_string - prints a reverse string
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 */

void rex_string(char *s)
{
char *start_c, *end_c, c;
int i, count;
int length = 0;

for (i = 0; S[i]; i++)
{
length++;
}

count = length;

start_c = s;
end_c = s;


for (i = 0; i < count - 1; i++)
{
end_c++;
}


c = *end_c;
*end_c = *start_c;
*start_c = c;


start_c++;
end_c--;
}
}
