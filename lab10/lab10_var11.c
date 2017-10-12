#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int GCD(int num1, int num2) {
    while (num1 && num2) {
        if (num1 > num2)
            num1 %= num2;
        else
            num2 %= num1;
    }
    return num1 + num2;
}

int LCD(int num1, int num2) {
    return num1 * num2 / GCD(num1, num2);
}


float *GetAllLengths(int *x, int *y, int n) {
    float *allLengths = (float *)malloc(n*(n - 1) * sizeof(float));
    int i, j, size;
    size = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i != j)
                allLengths[size++] = sqrt(pow((float)(x[i] - x[j]), 2.) + pow((float)(y[i] - y[j]), 2.));
    return allLengths;
}

int main() {
    int num1, num2;
    int n, i, *x, *y;
    float *allLengths;
    printf("1. Input first number: ");
    scanf("%d", &num1);
    printf("   Input second number: ");
    scanf("%d", &num2);
    printf("   GCD(%d, %d) = %d\n", num1, num2, GCD(num1, num2));
    printf("   LCD(%d, %d) = %d\n\n", num1, num2, LCD(num1, num2));
    
    printf("2. Input count coordinaites = ");
    scanf("%d", &n);
    x = (int *)malloc(n * sizeof(int));
    y = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("   Input coordinate %d: ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }
    allLengths = GetAllLengths(x, y, n);
    printf("   All lengths middle coordinates:\n   ");
    for (i = 0; i < n*(n - 1); i++)
        printf("%.3f ", allLengths[i]);
    free(x);
    free(y);
    free(allLengths);
    return 0;
}