#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    int len = strlen(str1) + strlen(str2);
    char *concat = (char*) malloc((len + 1) * sizeof(char));
    if (concat == NULL) return 1;

    strcpy(concat, str1);
    strcat(concat, str2);

    printf("Concatenated string: %s\n", concat);
    free(concat);
    return 0;
}
