char *_strcat(char *dest, char *src) {
    char *original = dest;

    while (*dest)
        dest++;

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return original;
}

