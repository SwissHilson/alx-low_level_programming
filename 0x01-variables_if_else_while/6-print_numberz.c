#include <stdio.h>

/**
 * main -  program that prints all single digit numbers of base 10
 * Return: 0(Program ran successfully!)
 */
int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
	putchar(num);
		putchar('\n');

	return (0);

}
