#include <stdio.h>

int main() {
    char str[50];
    printf("Input string: ");
    gets(str);
    printf("Output string: %s\n", str);
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    printf("Output number: %d", num);
    return 1;
}