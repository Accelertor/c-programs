#include <stdio.h>

void cpy(char source[], char dest[]) {
    int i = 0;

    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0';
}

int main() {
    printf("Enter a string:\n");

    char source[1000];
    gets(source);
    char dest[1000];
    cpy(source, dest);
    printf("Copied string: %s\n", dest);
    return 0;
}
