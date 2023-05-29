#include "main.h"
/**
 * swap_int - swapping two numbers
 *@a: number to swap
 *@b: number to swap
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
