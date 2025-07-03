/*

   1 
  1 2
 1 2 3
1 2 3 4

*/





#include <stdio.h>

int main() {
    int i, j, n = 4;
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}