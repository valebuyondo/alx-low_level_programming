#include "main.h"
/**
 * factorial - caculates the factorial of a number
 * @n: the number whose factorial is to be calculated
 * Return: returns -1 when n is less than 0
 *		returnd 1 when n is 0
 *		returns the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == '\0')
		return (1);
	return (n * (factorial(n - 1)));
}
