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
		for (start = 0; start <= end; start += 2)
		{
			printf("%c", str[start]);
		}
	}
	printf("\n");
}
