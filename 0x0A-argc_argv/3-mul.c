#include <stdio.h>
#include <stdlib.h>
/**
 * main - mutilplies 2 arguments;
 * @argc: counts how many argumets supplied
 * @argv: vector of the arguments
 * Return: ruturns 1 when less or more argumets are supplied
 *	returns 0 on sucess
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
