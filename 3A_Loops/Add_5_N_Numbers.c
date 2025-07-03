// Add 5 Natural Numbers

#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    while (i <= 5) {
        sum += i;
        i++;
    }

    printf("Sum of first 5 natural numbers : %d\n", sum);

    return 0;
}