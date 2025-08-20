//strrchr() function

#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]="Hello";
	printf("Input String 1 : %s",str1);
	char* ptr=strrchr(str1,'l');
	printf("\nThe combined string is %s ",ptr);
}