#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped: a = %d, b = %d\n", a, b);
    return 0;
}
