#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first integer to be swapped
 * @b: second integr to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
