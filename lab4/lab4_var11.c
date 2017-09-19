#include <stdio.h>

int main() {
    const int MIN = 11;
    const int MAX = 12;
    int num, answer;
    printf("1. Input a number: ");
    scanf("%d", &num);
    answer = num >= MIN && num <= MAX;
    printf("   Number is inside range %d..%d: %s\n", MIN, MAX, (answer) ? ("YES") : ("NO"));
    printf("2. Input a new number: ");
    scanf("%d", &num);
    answer = (num >> 11) % 2;
    printf("   11 bit: %d", answer);
    return 0;
}