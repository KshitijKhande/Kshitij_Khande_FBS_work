//strncpy() function

#include<stdio.h>
#include<string.h>
void main(){
	char str[10]="Alphabet";
	char str2[6];
	printf("Input String : %s",str);
	strncpy(str2,str,5);
	printf("\nThe second string is %s ",str2);
}
                                                     