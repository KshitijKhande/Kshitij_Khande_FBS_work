//strcpy function

#include<stdio.h>
#include<string.h>
void main(){
	char str[10]="DreamDo";
	char str2[10];
	printf("Input String : %s",str);
	printf("\nThe second string is %s ",strcpy(str2,str));
}