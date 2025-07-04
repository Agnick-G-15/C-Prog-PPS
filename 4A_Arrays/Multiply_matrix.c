
#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions of first matrix
    printf("Enter number of rows and columns of first matrix: ");
    if (scanf("%d%d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        printf("Invalid dimensions for the first matrix. Rows and columns must be positive integers.\n");
        return 1;
    }

    // Input dimensions of second matrix
    printf("Enter number of rows and columns of second matrix: ");
    if (scanf("%d%d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        printf("Invalid dimensions for the second matrix. Rows and columns must be positive integers.\n");
        return 1;
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 1;
    }

    // Allocate memory for matrices
    int** matrix1 = (int**)malloc(r1 * sizeof(int*));
    int** matrix2 = (int**)malloc(r2 * sizeof(int*));
    int** product = (int**)malloc(r1 * sizeof(int*));

    for (i = 0; i < r1; i++) matrix1[i] = (int*)malloc(c1 * sizeof(int));
    for (i = 0; i < r2; i++) matrix2[i] = (int*)malloc(c2 * sizeof(int));
    for (i = 0; i < r1; i++) product[i] = (int*)malloc(c2 * sizeof(int));

    // Input elements of first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input. Please enter integers.\n");
                return 1;
            }
        }
    }

    // Input elements of second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input. Please enter integers.\n");
                return 1;
            }
        }
    }

// Print first matrix
    printf("First matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Print second matrix
    printf("Second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    

    // Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0; // Initialize product element to 0
            for (k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    printf("Product of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < r1; i++) free(matrix1[i]);
    for (i = 0; i < r2; i++) free(matrix2[i]);
    for (i = 0; i < r1; i++) free(product[i]);
    free(matrix1);
    free(matrix2);
    free(product);

    return 0;
}