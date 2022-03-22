#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
