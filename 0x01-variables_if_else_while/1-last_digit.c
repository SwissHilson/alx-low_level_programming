#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that assigns a random number to n each time it is excuted
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
