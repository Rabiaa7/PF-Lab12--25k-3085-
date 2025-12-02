#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int*) calloc(n, sizeof(int));  
    if (arr == NULL) return 1;

    printf("Array after calloc: ");
    int i;
    for(i = 0; i < n; i++) {
        arr[i] = i + 1;  
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    printf("Array after malloc: ");

    for(i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
