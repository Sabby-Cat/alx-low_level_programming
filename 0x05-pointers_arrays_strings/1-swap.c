#include "main.h"
/**
 * swap_int - swaps values of 2 ints
 * @a: int 1 to be swapped
 * @b: int 2 to be swapped
 */
void swap_int(int *a, int *b)
{
	int sto = *a;

	*a = *b;
	*b = sto;
}
