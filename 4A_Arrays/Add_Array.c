// Add the values of an Array

#include <stdio.h>

int main() {
    int a[5], i;
    printf("Enter 5 Array values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(i = 0; i < 5; i++) {
        sum += a[i];
    }
    printf("The Sum of Array values is = %d\n", sum);

    return 0;
}
