#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *@c - alphabet to be printed
 *@a - represents the number of times for which the alphabet is to be printed
 */
void print_alphabet_x10(void)
{
	char c;
	int a = 1;

	while (a <= 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}
