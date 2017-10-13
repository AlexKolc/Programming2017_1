#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 100;
    char str[size];
    int i, cntDigits, cntLowers, cntUppers;
    const int maxMinutes = 499;
    int talkTime, subscriptionFee, costMinute, price;
    printf("1. Input string: ");
    fgets(str, size, stdin);
    cntDigits = 0;
    cntLowers = 0;
    cntUppers = 0;
    for (i = 0; i < strlen(str); i++) {
        if (isdigit(str[i]))
            cntDigits++;
        if (islower(str[i]))
            cntLowers++;
        if (isupper(str[i]))
            cntUppers++;
    }
    printf("   Count digits in string = %d\n", cntDigits);
    printf("   Count lower letters in string = %d\n", cntLowers);
    printf("   Count upper letters in string = %d\n", cntUppers);
    
    printf("2. Talk time = ");
    scanf("%d", &talkTime);
    printf("   Subscription fee = ");
    scanf("%d", &subscriptionFee);
    printf("   Cost minute over the limit = ");
    scanf("%d", &costMinute);
    while (costMinute < (double)subscriptionFee / maxMinutes) {
      printf("   Cost minute shold be more than cost minute from subscription fee!\n");
      printf("   Input cost minut over the limit > %d: ", (int)((double)subscriptionFee / maxMinutes));
      scanf("%d", &costMinute);
    }
    price = subscriptionFee;
    if (talkTime > maxMinutes)
        price += (talkTime - maxMinutes) * costMinute;
    printf("   Сost of one-month service = %d", price);
    return 0;
}
