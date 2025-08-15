//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>
void agefactor();
void main(){
	agefactor();
}     //main ends here//
void agefactor(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<12){
		printf("You are a Child");
	}else if(age>=12 && age<=19){
		printf("You are a Teenager");
	}else if(age>=20 && age<=59){
		printf("You are a Adult");	
	}else if(age>=60){
		printf("You are a Senior");
	}
} //function ends here//
