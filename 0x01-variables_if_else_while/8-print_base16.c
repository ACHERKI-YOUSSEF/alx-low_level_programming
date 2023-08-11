#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 and a to f.
 * Return: Always 0 (Success)
 */
int main(void)
{
char character = '0';

while (character <= '9' || (character >= 'a' && character <= 'f'))
{
putchar(character);
if (character == '9')
{
character = 'a';
}
else
{
character++;
}
}

putchar('\n');

return (0);
}

