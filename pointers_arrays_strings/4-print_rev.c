#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The input string to be printed in reverse
 */

void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (lenght = lenght - 1; lenght >= 0; lenght--)
	{
		_putchar(s[lenght]);
	}

	_putchar('\n');
}
