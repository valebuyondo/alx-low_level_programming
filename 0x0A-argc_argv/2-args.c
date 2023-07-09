#include <stdio.h>
/**
 * main - prints the urgements
 * @argc: arguments count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
