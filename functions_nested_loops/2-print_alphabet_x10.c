#include "main.h"

/**
 * print_alphabet_x10 - Pr2-print_alphabet_x10.coject 1, Task 3
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count_line = 0;

	while (letter < 'z')
	{
		_putchar(letter);
		letter++;
		if (letter == 'z')
		{
			count_line++;
			_putchar('\n');
			letter = 'a';
		}
		if (count_line == 10)
			break;
	}
}
