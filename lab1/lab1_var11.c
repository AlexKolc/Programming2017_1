#include <stdio.h>

int main() {
    const int sizeStr = 50;
    char str[sizeStr];
    float num;
    printf("Input string: ");
    fgets(str, sizeStr, stdin);
    printf("Output string: %s\n", str);
    fflush(stdin);
    printf("Input number: ");
    scanf("%f", &num);
    printf("Output number: %f", num);
    return 0;
}
