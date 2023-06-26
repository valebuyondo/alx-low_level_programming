#include "main.h"
#include <stdio.h>
/**
 * _puts - prints pointer str
 * @str: the character to be printed out
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
