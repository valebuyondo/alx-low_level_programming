#include "main.h"
/**
 * _isalpha - Checks if the cahrater is a letter
 * @c: the character to be checked
 * Return: returns 0 the character is a letter and o otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
