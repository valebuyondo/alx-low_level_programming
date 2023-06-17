#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int com = 0;

	while (com <= 9)
	{
		putchar('0' + com);
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('$');
		com++;
	}
	return (0);
}
