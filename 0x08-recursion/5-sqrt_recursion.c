#include "main.h"
/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number for which the root is calculated
 * @low: lowest of n
 * @high: highest of n
 * Return: returns the qsare root of n
 */
int _sqrt_recursion_helper(int n, int low, int high);
/**
 * _sqrt_recursion_helper - helper function in sqr root calculation
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 0, n));
}

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

