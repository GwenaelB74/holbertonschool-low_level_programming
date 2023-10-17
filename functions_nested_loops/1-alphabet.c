#include "main.h"

/**
 * 
 * print_alphabet - Project 2, Task 1 
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
