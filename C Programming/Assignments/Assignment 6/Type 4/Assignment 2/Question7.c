//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>
int agefactor(int);
void main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	int res=agefactor(age);
	if(res==1)
		printf("You are a Child");
	else if(res==2)
		printf("You are a Teenager");
	else if(res==3)
		printf("You are a Adult");
	else if(res==4)
		printf("You are a Senior");
}     //main ends here//
int agefactor(int age){
	if(age<12)
		return 1;
	else if(age>=12 && age<=19)
		return 2;
	else if(age>=20 && age<=59)
		return 3;	
	else if(age>=60)
		return 4;
} //function ends here//
