#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short *InputLong(int *size, int *error) {
    char *dig;
    int i;
    short *num;
    scanf("%s", dig);
    *size = strlen(dig);
    num = (short *)malloc((*size) * sizeof(short));
    for (i = (*size) - 1; i > -1; i--) {
        if (dig[i] < '0' || dig[i] > '9')
            *error = 1;
        num[(*size) - i - 1] = (short)dig[i] - (short)'0';
    }
    return num;
}

short *Input(int *size, int order) {
    short *num;
    int error = 1;
    printf("Input number %d: ", order);
    while (error == 1) {
        error = 0;
        num = InputLong(size, &error);
        if (error)
            printf("INVALID CHASTERS!\nInput other number %d: ", order);
    }
    /*for (error = 0; error < (*size); error++)
      printf("%d ", num[error]);*/
    return num;
}

int *Sum(int *num1, int *num2) {
}


int main() {
    int action, error;
    short *num1, *num2;
    int size1, size2;
    while (1) {
        printf("1. Sum\n");
        printf("2. Razn\n");
        printf("3. Multi\n");
        printf("4. Div\n");
        printf("0. Exit\n");
        printf("Select an action: ");
        scanf("%d", &action);

        switch (action) {
            case 1:
                num1 = Input(&size1, 1);
                num2 = Input(&size2, 2);
                break;
            case 2:
                num1 = Input(&size1, 1);
                num2 = Input(&size2, 2);
                break;
            case 3:
                num1 = Input(&size1, 1);
                num2 = Input(&size2, 2);
                break;
            case 4:
                num1 = Input(&size1, 1);
                num2 = Input(&size2, 2);
                break;
            case 0:
                return 0;
                break;
            default:
                printf("INVALID ACTION!\n");
        }
    }
}
