#include <unistd.h>

int _putchar(char str) {
    return write(STDOUT_FILENO, &str, 1);
}
