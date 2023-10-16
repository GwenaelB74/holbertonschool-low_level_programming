#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main = entry point
 *
 * Description "The last digit, project 1 of week "
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d ", n);
	if (lastdigit > 5)
		printf("is %d and is greater than 5\n", lastdigit);
	if (lastdigit == 0)
		printf("is 0 and is 0\n");
	else if (lastdigit < 6) 
		printf("is %d and is less than 6 and not 0\n", lastdigit);
	return (0);
}
