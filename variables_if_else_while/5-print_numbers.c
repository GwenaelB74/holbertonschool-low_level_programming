#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Script that print all single digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		{
		putchar(number);
		}

	putchar ('\n');
	return (0);
}
