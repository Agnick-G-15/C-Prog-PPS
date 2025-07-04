#include <stdio.h>

int main() {
    int i,j,s;  //space = s
    for(i=0; i<=5;i++){
        for(s=1; s<=5-i; s++){
            
                printf(" ");
            
            }

        for(j=1; j<=2*i-1; j++){
            
                printf("*");
            
            }
          
        printf("\n");

        }

    for(i=4; i>=1;i--){
        for(s=1; s<=5-i; s++){
            
                printf(" ");
            
            }

        for(j=1; j<=2*i-1; j++){
            
                printf("*");
            
            }
          
        printf("\n");

        }
        
    return 0;

    }
    

/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/
