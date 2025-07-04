#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Input values into the array
    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Display the array elements
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
