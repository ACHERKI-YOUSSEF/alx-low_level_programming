#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creates an array of chars, and initializes it with a specific char.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}

