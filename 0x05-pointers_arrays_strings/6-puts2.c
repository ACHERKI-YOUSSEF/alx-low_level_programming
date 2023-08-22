#include "main.h"

/**
 * _puts - prints every other character of a string, followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
int skip = 0;

while (*str != '\0')
{
if (skip == 0)
{
_putchar(*str);
}
skip = 1 - skip;
str += 1;
}
_putchar('\n');
}

