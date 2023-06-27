#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the first half
 * @str: the string to be printed as half
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n;

	if (length_of_the_string % 2 == 0)
		n = length_of_the_string / 2;
	else
		n = ((length_of_the_string - 1) ) / 2;
	while (str[n] != '\0')
	{
		putchar(str[n]);
		n++;
	}
	printf("\n");

}
