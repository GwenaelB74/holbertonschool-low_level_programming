#include <stdio.h>

/**
 * main - entry pint
 *
 * Description: Script that print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++) 
	{
	if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}	
	}

	putchar ('\n');
	return (0);
}
