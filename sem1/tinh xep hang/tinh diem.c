#include<stdio.h>

char grade(int a);

int main(){
    int marks;  
	printf("Enter your marks ");
    scanf("%d",&marks);
    
    char result1 = grade(marks);
    printf("\nYour grade is: %c", result1);
}

char grade(int a) {
    char b;
    
    if(a<35){
        b = 'F';
        return b;
	}
    else if(a>=35 && a<45){
        b = 'D';
        return b;
	}
    else if(a>=45 && a<60){
        b = 'C';
        return b;
	}
    else if(a>=60 && a<75){
        b = 'B';
        return b;
	}
    else{
        b = 'A';
        return b;
	}
}
