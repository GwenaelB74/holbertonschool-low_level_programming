#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à mesurer
 *
 * Description: Test
 *
 * Return: Le nombre de caractères dans la chaîne.
 */

int _strlen(char *s)
{

	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
