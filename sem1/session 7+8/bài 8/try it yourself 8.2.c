//Write a program to show your computer’s capabilities. 
//The user types in a letter of the alphabet and your program should display the corresponding language or package available.
//Using the ‘switch’ statement to choose and display the appropriate message. 
//Use the default label to display a message if the input does not match any of the above letters.

#include<stdio.h>

int main(){
	char input;
	printf("input: ");
	scanf("%c", &input);
	switch(input){
		case 'A':
			case 'a':
				printf("Ada");
				break;
		case 'B':
			case 'b':
				printf("Basic");
				break;
		case 'C':
			case 'c':
				printf("COBOL");
				break;
		case 'D':
			case 'd':
				printf("dBASEIII");
				break;
		case 'f':
			case 'F':
				printf("Fortran");
				break;
		case 'p':
			case 'P':
				printf("Pascal");
				break;
		case 'v':
			case 'V':
				printf("Visual C++");
				break;
		default:
			printf("wrong input");
	}
	return 0;
}
