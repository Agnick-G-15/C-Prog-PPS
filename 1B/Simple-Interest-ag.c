 #include<stdio.h>
 #include<math.h>
 int main() {
    
    float p,r,t,si;
    printf("Give Principal Amount : ");
    scanf("%f",&p);
    printf("Give Interest Percentage : ");
    scanf("%f",&r);
    printf("Given Time : ");
    scanf("%f",&t);
    si = (p*r*t)/100 ;
    printf("The Interest of the Amount : %f", si);
    printf("\nThe Total Amount : %f", p+si);
    return 0;
 }