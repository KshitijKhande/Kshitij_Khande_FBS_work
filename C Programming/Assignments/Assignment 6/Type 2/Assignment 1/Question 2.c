//2. Write a program to check given 3 digit number is pallindrome or not.//

#include<stdio.h>
int palindrome();
void main(){
	int res=palindrome();
	if(res)
		printf("It is a palindrome number");
	else
		printf("It is not a palindrome number");
}      //main ends here//
int palindrome(){
	int no;
	printf("Enter a number:");
	scanf("%d",&no);
	int r1=no%10;
	int q1=no/10;
	int r2=q1%10;
	int r3=q1/10;
	
	if(r1==r3)
		return 1;
	else
		return 0;
}          //function ends here//