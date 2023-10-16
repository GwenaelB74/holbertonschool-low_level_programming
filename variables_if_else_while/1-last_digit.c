#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main = entry point
 *
 * Description "The last digit"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("the string and is greater than 5");
	if (n == 0)
		printf("and is 0");
	if (n < 6)
		printf("the string and is less than 6 and not 0");
	return (0);
}
