/*
 * File: 0-positive_or_negative
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**main - print random number and whether it is positive or negative
 *
 *
 * Return: Always 0
 */
int main(void)
{

int n;
srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	elsa if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
