#include "main.h"
/**
 * _print_rev_recursion - prints reversed string
 * @s: string to e reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
