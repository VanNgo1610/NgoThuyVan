//Write a program to accept 2 numbers. Calculate the difference between the two values.
//If the difference is equal to any of the values entered, then display the following message:
//Difference is equal to value <number of value entered>
//If the difference is not equal to any of the values entered, display the following message:
//Difference is not equal to any of the values entered

#include <stdio.h>

int main(){
    int a,b;
    int diff;
    printf("\nEnter first number :: ");
    scanf("%d",&a);
    printf("\nEnter second number :: ");
    scanf("%d",&b);
    // check condition to identify which is largest number
    if( a!=b ){
        diff=a-b;
        printf("Difference is not equal to any of the values entered");}
    else{
        printf("Difference is equal to value <number of value entered");}
    printf("\nDifference between %d and %d is = %d\n",a,b,diff);
    return 0;
}
