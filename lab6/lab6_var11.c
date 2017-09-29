#include <stdio.h>
#include <stdlib.h>

int main() {
    const int size = 4;
    int i;
    char arr1[size];
    char *arr2;
    for (i = 0; i < size; i++) {
        printf("Input element %d: ", i + 1);
        scanf("%c", &arr1[i]);
        fflush(stdin);
    }
    for (i = 0; i < size; i++)
        printf("Element %d = %c\n", i + 1, *(arr1 + i));
        
    arr2 = (char *)malloc(size*sizeof(char));
    for (i = 0; i < size; i++) {
        printf("Input element %d: ", i + 1);
        scanf("%c", &arr2[i]);
        fflush(stdin);
    }
    for (i = 0; i < size; i++)
        printf("Element %d = %c\n", i + 1, arr2[i]);
    free(arr2);
    return 0;
}