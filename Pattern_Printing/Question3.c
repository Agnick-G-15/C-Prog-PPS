/*
1 2 3 4 
1 2 3
1 2
1
*/

#include <stdio.h>

void main(){
    int i , j ;
    
    for ( i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j <= 3 - i ; j++)
        {
            printf( "%d " , j + 1 );
        }

        printf("\n");
    }

}