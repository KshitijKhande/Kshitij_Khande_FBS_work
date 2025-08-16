//2. Write a program to check given 3 digit number is pallindrome or not.//

#include<stdio.h>
int palindrome(int);
void main(){
	int no=121;
	int res=palindrome(no);
	if(res)
		printf("%d is a palindrome number",no);
	else
		printf("%d is not a palindrome number",no);
}      //main ends here//
int palindrome(int no1){
	int r1=no1%10;
	int q1=no1/10;
	int r2=q1%10;
	int r3=q1/10;
	
	if(r1==r3)
		return 1;
	else
		return 0;
}          //function ends here//