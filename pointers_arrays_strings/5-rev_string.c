#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: The input string to be provided in reverse
 *
 */

void rev_string(char *s)
{
	char temp;
	int start = 0;
	int lenght = 0;
	int end;

	while (s[lenght])
	{
		lenght++;
	}

	end = lenght -1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
