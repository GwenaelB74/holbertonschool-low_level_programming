#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Script that print alphabet in lowercase AND in uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar ('\n');

	return (0);
}
