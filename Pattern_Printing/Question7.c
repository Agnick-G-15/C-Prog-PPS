/*

****
***
**
*

*/


#include <stdio.h>

void main(){
    int i , j ;
    
    for ( i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j <= 3 - i ; j++)
        {
            printf( "*");
        }

        printf("\n");
    }

}