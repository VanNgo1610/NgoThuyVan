//Declare two variables x and y. 
//Assign values to these variables. 
//Number x should be printed only if it is less than 2000 or greater than 3000
//number y should be printed only if it is between 100 and 500.
#include<stdio.h>

int main(){
    int x, y;
    printf("\nPlease enter the x value: ");
    scanf("%d", &x);
    printf("\nPlease enter the y value: ");
    scanf("\n%d", &y);
    if (x < 2000 || x > 3000){
	   printf("\nx = %d", x);}
    if (y > 100 && y < 500){
	    printf("\ny = %d", y);}
    return 0;
}
