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
		printf("Last digit of n is %d\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of n is %d\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d\n", n);
	}
	return (0);
}
