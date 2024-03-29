#include "main.h"
/**
 * _strlen - print string
 * @s: first operand
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * _strncat - The strncat() function is similar
 * @dest: first operand
 * @src: second
 * @n: third
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}