#include <stdio.h>
#include<string.h>
void reverseString(char str[]) {
    
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char sor[100];
    printf("Enter a string: ");
    gets(sor);
    
    reverseString(sor);
    printf("Reversed string: %s\n", sor);

    return 0;
}
