#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size;
    int i;

    printf("Enter the length of the string: ");
    scanf("%d", &size);
    getchar();  

    str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the string: ");
    fgets(str, size + 1, stdin);

    printf("Reversed string: ");
    for(i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] != '\n') 
            putchar(str[i]);
    }
    printf("\n");

    free(str);
    return 0;
}
