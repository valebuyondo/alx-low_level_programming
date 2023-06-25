#include "main.h"
/**
 * _islower - determines whether c is lowercase
 * @c: represents the character  to be checked
 * Return: Always 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
