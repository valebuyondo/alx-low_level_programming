char *_memcpy(char *dest, char *src, unsigned int n) {
    char *d = dest;
    char *s = src;
    while (n > 0) {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return dest;
}

