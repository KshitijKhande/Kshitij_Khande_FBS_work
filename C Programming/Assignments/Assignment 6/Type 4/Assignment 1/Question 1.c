//1. Write a program to check whether a number is even or odd.//

#include<stdio.h>
int evenodd(int);
void main(){
	int no=7;
	int res=evenodd(no);
	if(res)
		printf("%d is a even number",no);
	else
		printf("%d is a odd number",no);
} //main end here//

int evenodd(int no){
	if(no%2==0)
		return 1;
	else
		return 0;
}       //function ends here//
