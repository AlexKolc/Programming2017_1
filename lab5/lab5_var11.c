#include <stdio.h>

int main() {
    int size1 = 7;
    int size2 = 2;
    int i, j, k;
    int nums[size1] = {10, 20, 30, 40, 50, 60, 70};
    int A[size2][size2] = {{1, 2}, {3, 1}};
    int B[size2][size2] = {{1, 1}, {0, 2}};
    int C[size2][size2];
    for (i = 0; i < size1; i++)
        printf("Element %d: %d\n", i, nums[i]);
    for (i = 0; i < size2; i++) 
        for (j = 0; j < size2; j++) {
            C[i][j] = 0;
            for (k = 0; k < size2; k++)
                C[i][j] += A[i][k]*B[k][j];
        }
    printf("\n");
    for (i = 0; i < size2; i++)
        for (j = 0; j < size2; j++)
            printf("Element (%d, %d): %d\n", i, j, C[i][j]);
    return 0;
}