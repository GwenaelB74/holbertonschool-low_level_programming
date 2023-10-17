#include "main.h"

/**
 * main - entry point
 *
 * Description: Projet 2, Task 1
 *
 * Return: Always 0 (Success)
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
