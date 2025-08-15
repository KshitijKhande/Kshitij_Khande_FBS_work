//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>
int agefactor();
void main(){
	int res=agefactor();
	if(res<12)
		printf("You are a Child");
	else if(res>=12 && res<=19){
		printf("You are a Teenager");
	}else if(res>=20 && res<=59){
		printf("You are a Adult");	
	}else if(res>=60){
		printf("You are a Senior");
	}
}     //main ends here//
int agefactor(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	return age;
} //function ends here//
