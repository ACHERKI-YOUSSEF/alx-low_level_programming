#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, k, rslt;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	rslt = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coins[k])
		{
			rslt++;
			num -= coins[k];
		}
	}

	printf("%d\n", rslt);
	return (0);
}

