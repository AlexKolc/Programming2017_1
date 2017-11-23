#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void changeDate(int *day, int *month, int *year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (*year % 400 == 0 || *year % 100 != 0 && *year % 4 == 0)
        daysInMonth[1] = 27;
    (*day)++;
    if (*day > daysInMonth[*month - 1]) {
        *day = 1;
        (*month)++;
        if (*month > 12) {
            *month = 1;
            (*year)++;
        }
    }
}

int main() {
    const int MAXSIZE = 50;
    const int cntDays = 10;
    char nameOfFile[MAXSIZE];
    FILE *newFile;
    time_t rawDate;
    struct tm *dateInfo;
    int i, day, month, year;

    printf("1. Input name of file: ");
    fgets(nameOfFile, MAXSIZE, stdin);
    nameOfFile[strlen(nameOfFile) - 1] = '\0'; //delete 'enter' from end
    strcat(nameOfFile, ".txt");
    newFile = fopen(nameOfFile, "w"); //open\create file for writing
    time(&rawDate);
    dateInfo = localtime(&rawDate);
    day = dateInfo->tm_mday;
    month = dateInfo->tm_mon + 1;
    year = dateInfo->tm_year + 1900;
    fprintf(newFile, "Today: %d.%d.%d\n", day, month, year);
    for (i = 1; i < cntDays; i++) {
        changeDate(&day, &month, &year);
        fprintf(newFile, "Today + %d: %d.%d.%d\n", i, day, month, year);
    }

    return 0;
}
