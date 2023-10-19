#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number
 *
 * Return: The value of the last digit
 */


int print_last_digit(int n)
{
	int last_digit;
	if (n < 0)
	{
		last_digit = -n % 10;
		_putchar('-');
	}
	else
	{
		last_digit = n % 10;
	}

	_putchar(last_digit + '0');
	return last_digit;
}
