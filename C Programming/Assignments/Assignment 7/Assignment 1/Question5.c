//5. Write a program to check whether a person is eligible to vote (age = 18).//

#include<stdio.h>
void vote(int*);
void main(){
	int age=19;
	int *ptr=&age;
	vote(ptr);
}  //main ends here//
void vote(int* age){

	if(age>18){
		printf("You are eligible to vote");
		
	}else{
		printf("You are not eligible to vote");
	}
}     //function ends here//