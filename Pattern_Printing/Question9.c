/*

 *******
  *****
   ***
    *

*/

#include <stdio.h>

void main(){
    int i , j , k , p;
    
    for ( i = 0 ; i < 4 ; i++)
    {

        for ( j = 0 ; j <= i ; j++)
        {
            printf(" ");
        }

        for ( k = 0 ; k <= 3-i ; k++)
        {
            printf( "*" );
        }

        for ( p = 1 ; p <= 3-i ; p++)
        {
            printf( "*" );
        }
        
        printf("\n");
    }

}