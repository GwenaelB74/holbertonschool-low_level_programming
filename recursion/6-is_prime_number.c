#include "main.h"

/**
 * is_prime_number - Vérifie si un entier est un nombre premier.
 * @n: L'entier à vérifier.
 *
 * Retourne : 1 si n est un nombre premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	else
	{
		return is_prime_helper(n, 2);
	}
}

/**
 * is_prime_helper - Fonction d'aide pour vérifier la primalité de manière récursive.
 * @n: L'entier à vérifier pour la primalité.
 * @divisor: Le diviseur actuel à tester.
 *
 * Retourne : 1 si n est un nombre premier, 0 sinon.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == n)
	{
		return 1;
	}
	else if (n % divisor == 0)
	{
		return 0;
	}
	else
	{
		return is_prime_helper(n, divisor + 1);
	}
}
