//strstr function

#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]="Human Being";
	printf("Input String 1 : %s",str1);
	char *ptr=strstr(str1,"Human");
	printf("\nThe combined string is %s ",ptr);
}