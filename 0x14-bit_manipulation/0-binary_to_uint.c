#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int deci_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[k] - '0');
	}

	return (deci_val);
}

