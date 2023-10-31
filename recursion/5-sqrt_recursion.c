#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre de manière récursive.
 * @n: Le nombre pour lequel trouver la racine carrée.
 *
 * Retourne: La racine carrée naturelle de n, ou -1 si n n'a pas de racine carrée naturelle.
 */
int _sqrt_recursion(int n)
{
		return sqrt_helper(n, 1);
}

/**
 * sqrt_helper - Fonction d'aide pour calculer la racine carrée de manière récursive.
 * @n: Le nombre pour lequel trouver la racine carrée.
 * @x: Le candidat pour la racine carrée.
 *
 * Retourne: La racine carrée naturelle de n, ou -1 si n n'a pas de racine carrée naturelle.
 */
int sqrt_helper(int n, int x)
{
		if (x * x == n)
		{
				return x;
		}
		else if (x * x > n)
		{
				return -1;
		}
		else
		{
				return sqrt_helper(n, x + 1);
		}
}
