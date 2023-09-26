#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 5;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Return value: %u\n", result);

    return 0;
}

