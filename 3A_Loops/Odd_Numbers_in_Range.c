// Print all Odd number in a Range

#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the range : ");
    scanf("%d %d", &start, &end);

    printf("Odd numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++)
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}