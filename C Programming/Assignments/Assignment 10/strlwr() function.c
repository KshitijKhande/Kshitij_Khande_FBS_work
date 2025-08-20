//strlwr function

#include<stdio.h>
#include<string.h>
void main(){
	char str[10]="DREAM";
	printf("Input String : %s",str);
	printf("\nThe string converted in lowercase is : %s ",strlwr(str));
}