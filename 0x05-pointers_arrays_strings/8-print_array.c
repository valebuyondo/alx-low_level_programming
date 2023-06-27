#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - Prints an array
 * @a: aray to be printed
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", a[start]);
		if (start == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");

}
