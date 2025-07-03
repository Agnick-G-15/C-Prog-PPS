#include <stdio.h>

int main() {
    int arr[15] = {67, 103, 112, 97, 65, 99, 104, 105, 75, 97, 114, 117, 110, 103, 97};

    for (int i = 14; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            char ch = (char)arr[j];
            printf("%c", ch);   
        }
        printf("\n");         
    }

    int brr[12] = {68, 117, 99 , 104, 71, 97, 121, 101, 71, 117, 114, 117};

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j <= i; j++) {
            char ch = (char) brr[j];
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}