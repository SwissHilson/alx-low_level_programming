#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}