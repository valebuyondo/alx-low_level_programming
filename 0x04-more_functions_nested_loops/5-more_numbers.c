#include "main.h"
/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int c;
	int a = 1;

	while (a <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar('0' + (c % 10)); }
		_putchar('\n');
		a++;
	}
}
