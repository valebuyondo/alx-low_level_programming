#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: arguments passed on afunction
 * @argv: argumetn vector
 * Return: returns number of arguments passed
 */
int main(int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
