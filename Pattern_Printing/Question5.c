/*
    1234
    123
    12
    1
*/


#include <stdio.h>

void main(){
    int i , j , k;
    
    for ( i = 0 ; i < 4 ; i++)
    {

        for ( j = 0 ; j < i ; j++)
        {
            printf(" ");
        }

        for ( k = 0 ; k <= 3-i ; k++)
        {
            printf( "%d" , k + 1 );
        }

        printf("\n");
    }

}