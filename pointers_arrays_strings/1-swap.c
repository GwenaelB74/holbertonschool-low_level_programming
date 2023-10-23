#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers
 * @a: A pointer to the first integer to be swapped
 * @b: A pointer to the second integer to be swapped
 *
 * Description: This function takes two integer pointers as parameters and
 * swaps the values of the integers they point to, effectively interchanging
 * the values between the two variables.
 */

void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
