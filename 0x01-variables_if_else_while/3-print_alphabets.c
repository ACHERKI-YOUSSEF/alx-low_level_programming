#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase,
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* Print uppercase alphabet */
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

