#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Print combination of double digits separated by comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
n = 0;
while (n < 10)
{
m = 0;
while (m < 10)
{
if (m > n)
{
putchar('0' + n);
putchar('0' + m);
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
m++;
}
n++;
}
putchar('\n');
return (0);
}

