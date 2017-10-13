#include <stdio.h>

int main() {
    int num1, num2;
    printf("1. Input a number in dec: ");
    scanf("%d", &num1);
    printf("2. Number in hex: %X\n", num1);
    printf("3. Number in oct: %o\n", num1);
    printf("   Number in oct shifted left by 3: %o\n", num1 << 3);
    printf("4. Number in oct: %o\n", num1);
    printf("%d", ~num1);
    printf("   Number in oct with of negation: %o\n", ~num1);
    printf("5. Input new number in oct: ");
    scanf("%o", &num2);
    printf("   Number from 1. AND number from 3., in oct: %o", num2 & num1);
    return 0;
}