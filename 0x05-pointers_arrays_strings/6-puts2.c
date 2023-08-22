#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
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

