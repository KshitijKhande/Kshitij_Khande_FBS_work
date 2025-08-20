//strchr() function
#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]="Human";
	printf("Input String 1 : %s",str1);
	char* ptr=strchr(str1,'m');
	printf("\nThe combined string is %s ",ptr);
}