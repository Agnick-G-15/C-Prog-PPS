/*


    * Print the following pattern:
    * 
    *    *
    *   ***
    *  *****
    * *******
    * 
    */

#include <stdio.h>

void main(){
    int i , j , k , p;
    
    for ( i = 0 ; i < 4 ; i++)
    {

        for ( j = 0 ; j <= 2 - i ; j++)
        {
            printf(" ");
        }

        for ( k = 0 ; k <= i ; k++)
        {
            printf( "*" );
        }

        for ( p = 1 ; p <= i ; p++)
        {
            printf( "*" );
        }
        
        printf("\n");
    }

}