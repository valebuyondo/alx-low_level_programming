#include "main.h"
#include <stdio.h>
/**
 * _memset - sets memory pointed to by to n characters
 *@s: pointer to memory of char b
 *@b: character for which occupies memory
 *@n: bytes of the memory
 *Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
