#include "main.h"
/**
 * swap_int - swaps pointer to a with a pointer to b and vice versa
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
