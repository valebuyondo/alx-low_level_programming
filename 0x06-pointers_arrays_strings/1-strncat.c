#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concates two string
 * @dest: pointer 1
 * @src: pointer source
 * @n: maximun number of bytes
 * Return: returns results
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
