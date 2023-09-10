//Write a program to evaluate the Grade of a student for the following constraints:
//If marks > 75 – grade A
//If 60 < marks < 75 – grade B
//If 45 < marks<60 – grade C
//If 35 < marks<45 - grade D
//If marks < 35 – grade E

#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Wrong Entry");}
    else if(marks<35){
        printf("Grade F");}
    else if(marks>=35 && marks<45){
        printf("Grade D");}
    else if(marks>=45 && marks<60){
        printf("Grade C");}
    else if(marks>=60 && marks<75){
        printf("Grade B");}
    else{
        printf("Grade A");}
}
