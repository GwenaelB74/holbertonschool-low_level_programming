#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Script that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');
	return (0);
}
