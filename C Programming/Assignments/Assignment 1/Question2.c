#include<stdio.h>
void main(){
	int no=121;
	int r1=no%10;
	int q1=no/10;
	int r2=q1%10;
	int r3=q1/10;
	
	if(r1==r3){
		printf("%d is a palindrome number",no);
	}else{
		printf("%d is not a palindrome number",no);
	}
}