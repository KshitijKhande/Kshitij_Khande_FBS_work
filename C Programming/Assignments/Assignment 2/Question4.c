#include<stdio.h>
void main(){
	int marks;
	printf("Enter your total marks:");
	scanf("%d",&marks);
	if(marks>=75){
		printf("Result: Distinction");
	}else if(marks>=65 && marks<75){
		printf("Result: First Class");
	}else if(marks>=55 && marks<65){
		printf("Result: Second Class");
	}else if(marks>=45 && marks<55){
		printf("Result: Pass Class");
	}else if(marks<40){
		printf("Result : Fail");
	}
}