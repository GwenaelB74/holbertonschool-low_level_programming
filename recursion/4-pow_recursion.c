#include "main.h"

/**
 * _pow_recursion - Calculate the power of x raised to y recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return x * _pow_recursion(x, y - 1);
	}
}
