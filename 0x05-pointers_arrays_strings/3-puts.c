#include "main.h"
#include <string.h>
void _puts(char *str)
{
	while (*str != '\0') {
        putchar(*str);
        str++;}
}
