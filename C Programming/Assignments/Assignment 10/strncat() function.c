//strncat function

#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]="Human";
	char str2[10]=" Being";
	printf("Input String 1 : %s",str1);
	printf("\nInput String 2 : %s",str2);
	strncat(str1,str2,3);
	printf("\nThe combined string is %s ",str1);
}