//Montek company gives allowances to its employees depending on their grade as follows
//Calculate the salary at the end of the month. (Accept Salary and Grade from the user)

#include <stdio.h>
void main(){
	int grade;
	float allowance;
	printf("\nPlease enter your employer grade :");
	scanf("%d", &grade);
	if(grade == 1){
		printf("The allownace is 300");}
	else if(grade == 2){
		printf("The allownace is 250");}
	else{
		printf("The allownace is 100");}	
}
