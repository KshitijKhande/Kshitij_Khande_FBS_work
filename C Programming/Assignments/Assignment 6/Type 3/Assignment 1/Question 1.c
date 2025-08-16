//1. Write a program to check whether a number is even or odd.//

#include<stdio.h>
void evenodd(int);
void main(){
	int no=7;
	evenodd(7);
} //main end here//

void evenodd(int no){
	if(no%2==0){
		printf("%d is a even number",no);
		}else
		{
			printf("%d is a odd number",no);
		
	}
}       //function ends here//
