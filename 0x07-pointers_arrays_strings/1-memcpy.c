#include "main.h"
/**
 *_memcpy - copies from src to dest
 *@dest: destination after copying
 *@src: source before copying
 *@n: memeor characters
 *Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
