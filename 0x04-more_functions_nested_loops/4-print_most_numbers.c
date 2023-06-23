#include "main.h"
/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 4 && c != 2)
		{
			_putchar('0' + c);
		}
	}
	_putchar('\n');
}
