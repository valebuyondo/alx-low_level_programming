#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string s
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int st = 0;
	int end = len - 1;

	while (st < end)
	{
		int temp = s[st];

		s[st] = s[end];
		s[end] = temp;
		st++;
		end--;
	}
}
