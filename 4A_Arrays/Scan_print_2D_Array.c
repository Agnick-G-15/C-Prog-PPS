// Scan and Print the data of 2-D Array

#include <stdio.h>

int main() {
    int arr[2][3], i, j;
    printf("Enter values for 2x3 Matrix:");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
