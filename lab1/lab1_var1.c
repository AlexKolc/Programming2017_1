#include <stdio.h>

int main() {
    const int sizeStr = 50;
    char str[sizeStr];
    int num;
    printf("Input string: ");
    fgets(str, sizeStr, stdin);
    printf("Output string: %s\n", str);
    fflush(stdin);
    printf("Input number: ");
    scanf("%d", &num);
    printf("Output number: %d", num);
    return 0;
}