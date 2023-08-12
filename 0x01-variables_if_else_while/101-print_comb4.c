#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Print combination of 3 digits separated by comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
int m, k;
while (n < 10)
{
m = n + 1;
while (m < 10)
{
k = m + 1;
while (k < 10)
{
putchar('0' + n);
putchar('0' + m);
putchar('0' + k);
if (n != 7 || m != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
k++;
}
m++;
}
n++;
}
putchar('\n');
return (0);
}

