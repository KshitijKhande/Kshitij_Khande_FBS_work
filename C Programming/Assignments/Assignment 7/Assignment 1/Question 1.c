//1. Write a program to check whether a number is even or odd.//

#include<stdio.h>
void evenodd(int*);
void main(){
	int no=7;
	int* ptr=&no;
	evenodd(ptr);
} //main end here//

void evenodd(int* ptr){
	if(*ptr%2==0){
		printf("%d is a even number",*ptr);
		}else
		{
		printf("%d is a odd number",*ptr);
		
	}
}       //function ends here//
