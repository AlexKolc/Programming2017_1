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
    
    printf("2. Продолжительность разговоров = ");
    scanf("%d", &talkTime);
    printf("   Величина абонентской платы = ");
    scanf("%d", &subscriptionFee);
    printf("   Cтоимость минуты сверх лимита = ");
    scanf("%d", &costMinute);
    while (costMinute < (double)subscriptionFee / maxMinutes) {
      printf("   Стоимость минуты сверхлимита не может быть меньше стоимости минуты входящей в лимит!\n");
      printf("   Введите стоимость минуты сверх лимита  > %d: ", (int)((double)subscriptionFee / maxMinutes));
      scanf("%d", &costMinute);
    }
    price = subscriptionFee;
    if (talkTime > maxMinutes)
        price += (talkTime - maxMinutes) * costMinute;
    printf("   Стоимость месячного обслуживания = %d", price);
    return 0;
}