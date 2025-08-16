//5. Write a program to check whether a person is eligible to vote (age = 18).//

#include<stdio.h>
int vote(age);
void main(){
	int age=19;
	int res=vote(age);
	printf(res);
}  //main ends here//
int vote(int age){
	if(age>18)
		return printf("You are eligible to vote");
	else
		return printf("You are not eligible to vote");
	
}     //function ends here//