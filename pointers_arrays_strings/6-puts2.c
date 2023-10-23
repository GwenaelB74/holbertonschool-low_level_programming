#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a newline
 * @str: The input string to be processed
 *
 * Description: This function iterates through the input string and prints
 * every other character starting with the first character.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
