#include <stdio.h>


int main() {
    float radius, area, perimeter;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    perimeter = 2 * 3.1416 * radius;
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
