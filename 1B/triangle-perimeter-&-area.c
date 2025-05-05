#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area, perimeter;
    printf("Enter sides a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    perimeter = a + b + c;
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
