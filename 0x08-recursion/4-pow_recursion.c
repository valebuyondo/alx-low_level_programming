#include "main.h"
/**
 * _pow_recursion - recursive functon that powers x
 * @x: the number to be powered
 * @y: the power to a  given number
 * Return: return -1 when y is less than 0
 * return 1 when y = 0
 * return the x powered by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
