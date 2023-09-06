//Write a program to accept 2 numbers and tell whether the product of the two numbers is equal to or greater than 1000.
#include <stdio.h>
int main(){
    printf( "Input two integer separated by whitespace: "); 
    int a; 
    int b; 
    scanf("%d %d", &a, &b);
    float orderamount; 
    printf("Please enter the order amount :" );
    scanf("%f" , &orderamount);
    if(orderamount == a){
        if(a >=1000){
            printf("Greater")
        }
        else{
            printf("Less")
        }
    }
    if(orderamount == b){
        if(b >=1000){
            printf("Greater")
        }
        else{
            printf("Less")
        }
    }
}