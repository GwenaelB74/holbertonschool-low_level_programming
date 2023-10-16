#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Script that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char numhexa = '0';
	char letter = 'a';

	while (numhexa <= '9')
	{
		putchar(numhexa);
		numhexa++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
