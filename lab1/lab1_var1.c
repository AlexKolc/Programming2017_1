#include <stdio.h>

int main() {
    char s[50];
    printf("Input string: ");
    gets(s);
    printf("Output string: %s\n", s);
    int a;
    printf("Input number: ");
    scanf("%d", &a);
    printf("Output number: %d", a);
    return 1;
}