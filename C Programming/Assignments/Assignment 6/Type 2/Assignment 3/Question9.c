//9 Check the given number is Palindrome number or not. Input: n = 121 Output: Palindrome//

#include<stdio.h>
int palindrome();
void main(){
	int res=palindrome();
	printf(res);
}
int palindrome(){
	int no=121,temp=no,rem=0;
	while(no>0){
		int r1=no%10;
		rem=rem*10+r1;
		no=no/10;
	}
	if(temp==rem)
		return printf("%d is a Palindrome number",temp);
	else
		return printf("%d is not a Palindrome number",temp);
}