//5. Write a program to check whether a person is eligible to vote (age = 18).//

#include<stdio.h>
int vote();
void main(){
	int res=vote();
	if(res>18)
		printf("You are eligible to vote");
	else
		printf("You are not eligible to vote");
}  //main ends here//
int vote(){
	int age=19;
	return age;
}     //function ends here//