#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - skips out the next character
 * @str: string to be used
 */
void puts2(char *str)
{
	int len = strlen(str);
	int end = len - 1;
	int start = 0;

	while (start <= end)
	{
		if ((str[start] % 2) == 0)
		{
			printf("%c", str[start]);
		}
		start++;
	}
	printf("\n");
}
