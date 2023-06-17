#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex = 0;

	while (hex <= 15)
	{
		if (hex < 10)
		{
			putchar('0' + hex);
		}
		else
			putchar('a' + (hex - 10));
		hex++;
	}
	putchar('\n');
	return (0);
}
