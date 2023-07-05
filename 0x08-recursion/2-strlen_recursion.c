#include "main.h"
/**
 * _strlen_recursion - calculates the string lenth
 * @s: the string for which the lenth we want
 * Return: returns the string length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
