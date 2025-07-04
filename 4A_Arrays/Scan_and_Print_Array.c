// Input the values to an Array and Display the values

#include <stdio.h>

int main() {
    int a[5], i;
    printf("Enter 5 rray values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("The Array values are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
