#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number wherever it is positive or negative or zero.
 * Return: 0 means success.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
