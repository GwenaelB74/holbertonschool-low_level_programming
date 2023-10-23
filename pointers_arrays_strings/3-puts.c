#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a newline to stdout
 * @str: The input string to be printed
 *
 * Description: This function prints each character of the input string
 * 'str' to the standard output using the _putchar function. It continues
 * printing until it reaches a null-terminating character '\0'. After
 * printing the entire string, it adds a newline character '\n' to the end.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		str++;
	}

	_putchar('\n');
}
