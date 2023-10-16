#include <stdio.h>

/**
 * main - entry point
 *
 * Description: That script print all single number
 *
 * Return: Always 0 (Success)
 *
 */

int main() 
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
