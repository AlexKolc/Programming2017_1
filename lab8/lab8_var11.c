#include <stdio.h>
#include <string.h>

int main() {
    const int sizeStr = 50;
    char str1[sizeStr], str2[sizeStr];
    char *tokens; 
    int n;
    printf("2. Input first string: ");
    fgets(str1, sizeStr, stdin);
    str1[strlen(str1) - 1] = '\0'; //delete 'enter' from end
    printf("   Input second string: ");
    fgets(str2, sizeStr, stdin);
    str2[strlen(str2) - 1] = '\0'; //delete 'enter' from end
    printf("   Input count symbols for concat: ");
    scanf("%d", &n);
    fflush(stdin); //delete 'enter' from stdin
    strncat(str1, str2, n);
    printf("   str1 + n symbols str2 = %s\n\n", str1);
    
    printf("4. Input first string: ");
    fgets(str1, sizeStr, stdin);
    str1[strlen(str1) - 1] = '\0'; //delete 'enter' from end
    printf("   Input second string: ");
    fgets(str2, sizeStr, stdin);
    str2[strlen(str2) - 1] = '\0'; //delete 'enter' from end
    printf("   Input count symbols for comparisons: ");
    scanf("%d", &n);
    fflush(stdin); //delete 'enter' from stdin
    printf("   Result comparisons = %d\n\n", strncmp(str1, str2, n));
    
    printf("6. Input first string: ");
    fgets(str1, sizeStr, stdin);
    str1[strlen(str1) - 1] = '\0'; //delete 'enter' from end
    printf("   Input second string: ");
    fgets(str2, sizeStr, stdin);
    str2[strlen(str2) - 1] = '\0'; //delete 'enter' from end
    printf("   Input count symbols for copy: ");
    scanf("%d", &n);
    fflush(stdin); //delete 'enter' from stdin
    strncpy(str1, str2, n);
    printf("   Result coping = %s\n\n", str1);
    
    printf("10. Input first string: ");
    fgets(str1, sizeStr, stdin);
    str1[strlen(str1) - 1] = '\0'; //delete 'enter' from end
    printf("    Input second string: ");
    fgets(str2, sizeStr, stdin);
    str2[strlen(str2) - 1] = '\0'; //delete 'enter' from end
    strcpy(str1, strpbrk(str1, str2));
    printf("Any character from 1 that is in the 2 string = %c\n\n", str1[0]);
    
    printf("13. Input first string: ");
    fgets(str1, sizeStr, stdin);
    str1[strlen(str1) - 1] = '\0'; //delete 'enter' from end
    printf("    Input second string: ");
    fgets(str2, sizeStr, stdin);
    strcpy(str2, strpbrk(str1, str2));
    str2[1] = '\0';
    tokens = strtok(str1, str2);
    printf("    The string is divided by a separator \"%s\":\n");
    while (tokens) {
        printf("      %s\n", tokens);
        tokens = strtok(NULL, str2);
		}
    return 0;
}