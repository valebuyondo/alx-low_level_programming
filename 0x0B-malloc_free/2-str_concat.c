#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	size_t len1;
    char *concatenated;
	size_t len2;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    len1 = strlen(s1);
     len2 = strlen(s2);

    concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
    {
        return NULL;
    }

    strcpy(concatenated, s1);
    strcat(concatenated, s2);

    return concatenated;
}
