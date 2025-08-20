//strcspn function

#include<stdio.h>
#include<string.h>
void main(){
	char str1[]="Happening";
	char str2[]="Happen";
	printf("Input String 1 : %s",str1);
	printf("\nInput String 2 : %s",str2);
	printf("\nThe initial segment length is : %d ",strcspn(str1,str2));
}