#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - pointer to newly allocated memory
 * @str:string
 * Return: returns a duplicate to str
 */
char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	duplicate  = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}

