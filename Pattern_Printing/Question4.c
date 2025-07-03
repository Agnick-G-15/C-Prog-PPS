/*
   1
  12
 123
1234

*/


#include <stdio.h>

void main(){
    int i , j , k;
    
    for ( i = 0 ; i < 4 ; i++)
    {

        for ( j = 0 ; j <= 2 - i ; j++)
        {
            printf(" ");
        }

        for ( k = 0 ; k <= i ; k++)
        {
            printf( "%d" , k + 1 );
        }

        printf("\n");
    }

}