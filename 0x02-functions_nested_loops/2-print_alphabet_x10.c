#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase 10 times
 */

void print_alphabet(void)
{
int letter ,  i;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}

