//9 Check the given number is Palindrome number or not. Input: n = 121 Output: Palindrome//

#include<stdio.h>
void palindrome(int*,int*,int*);
void main(){
	int no=121,temp=no,rem=0;
	int* no1=&no,*temp1=&temp,*rem1=&rem;
	palindrome(no1,temp1,rem1);
}
void palindrome(int* no,int* temp,int* rem){
	
	while(*no>0){
		int r1=*no%10;
		*rem=*rem*10+r1;
		*no=*no/10;
	}
	if(*temp==*rem)
		printf("%d is a Palindrome number",*temp);
	else
		printf("%d is not a Palindrome number",*temp);
}