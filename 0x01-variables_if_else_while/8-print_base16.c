#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 and a to f.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 0;
while (n < 10)
{
putchar('0' + n);
n++;
}
char letter;
letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}

