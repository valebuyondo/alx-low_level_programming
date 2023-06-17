#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{

	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
