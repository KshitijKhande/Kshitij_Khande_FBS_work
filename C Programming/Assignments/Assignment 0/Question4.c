#include<stdio.h>
void main(){
	int a=34,b=56,temp;
	printf("Before swapping: a=%d,b=%d",a,b);
	temp=b;
	b=a;
	a=temp;
	printf("\nAfter swapping: a=%d,b=%d",a,b);
}