#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and initialize them
 * @size: size of an array
 * @c: value of the array
 * Return: returns null is 0
 * returns null when aray is null
 * returns array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
