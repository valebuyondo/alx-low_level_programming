#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 7; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 8; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 <= 9; dig3++)
			{
				putchar('0' + dig1);
				putchar('0' + dig2);
				putchar('0' + dig3);
				if (dig1 != 7 || dig2 != 8 || dig3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
