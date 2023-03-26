#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of two digits.
 * Return: 0(Ptogram ran successfully!)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0'(;
			putchar(b + '0');
			if (a % 10  == '8' && b % 10 == '9')
				break;
			putchar(',');
                	putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
