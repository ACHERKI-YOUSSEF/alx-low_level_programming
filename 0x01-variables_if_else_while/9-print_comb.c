#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Prints combination of single digits separated by comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 0;
while (n < 10)
{
putchar('0' + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}

