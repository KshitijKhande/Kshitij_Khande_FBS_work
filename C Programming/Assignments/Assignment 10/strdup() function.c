//strdup() function

#include<stdio.h>
#include<string.h>
void main(){
	char str1="avengers";
	char str2=strdup(str1);
	printf("%c",str2);
}
