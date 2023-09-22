char *_strcpy(char *dest, char *src) {
    char *copy = dest;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return copy;
}

