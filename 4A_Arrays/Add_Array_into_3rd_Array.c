// Add two Array elements and store into a third Array

#include <stdio.h>
int main() {

        int a[5], b[5], c[5],i;

        printf("Enter 5 Elements of 1st Array:");
        for(i = 0; i < 5; i++) {
            scanf("%d", &a[i]);
        }

        printf("Enter 5 Elements of 2nd Array:");
        for(i = 0; i < 5; i++) {
            scanf("%d", &b[i]);
        }

        printf("Sum of two Arrays:");
        for(i = 0; i < 5; i++) {
            c[i] = a[i] + b[i];
            printf("%d ", c[i]);
        }

    return 0;
}
