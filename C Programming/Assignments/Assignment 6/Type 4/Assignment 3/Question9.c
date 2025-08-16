//9 Check the given number is Palindrome number or not. Input: n = 121 Output: Palindrome//

#include<stdio.h>
int palindrome(int,int,int);
void main(){
	//int no=121 If we call temp before no is initialised it will be error //
	int no,temp,rem=0;
	printf("Enter any number of your choice: ");
	scanf("%d",&no);
	temp=no;
	int res=palindrome(no,temp,rem);
	if(res)
		printf("%d is a palindrome number",no);
	else
		printf("%d is not a palindrome number",no);
	
}
int palindrome(int no,int temp,int rem){
	while(no>0){
		int r1=no%10;
		rem=rem*10+r1;
		no=no/10;
	}
	if(temp==rem)
		return 1;
	else
		return 0;
}