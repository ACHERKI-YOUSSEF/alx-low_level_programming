#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putrchar";
int i;
for (i = 0; i < sizeof(str) - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}

