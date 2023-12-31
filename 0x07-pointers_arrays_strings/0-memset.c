#include "main.h"
/**
 * _memset - fill block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

