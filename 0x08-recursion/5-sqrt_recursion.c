#include "main.h"
int _sqrt_recursion(int n);
int _sqrt_recursion_helper(int n, int low, int high);
/**
 * _sqrt_recursion - Calculates the square root of a n
 * @n: The number to return the square root of
 * Return: Returns the qsare root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 0, n));
}

/**
 * _sqrt_recursion_helper - Helper funtion in getting the sqauare root
 * @n: The number to return the square root of
 * @low: Lowest of n
 * @high: Highest of n
 * Return: returns high when low is greater than high
 */

int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (high);
	mid = low + (high - low) / 2;
	if (mid <= n / mid && (mid + 1) > n / (mid + 1))
		return (mid);
	else if (mid > n / mid)
		return (_sqrt_recursion_helper(n, low, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, high));
}

