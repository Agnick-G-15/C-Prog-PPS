#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Input values into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array elements in reverse order vertically
    printf("You entered (in reverse order):\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
