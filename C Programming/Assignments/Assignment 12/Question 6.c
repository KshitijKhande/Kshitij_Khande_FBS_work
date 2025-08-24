//6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
#include<string.h>
char* replaceSpace(char*);
void main(){
	char str[20];
	printf("Enter the string: ");
	scanf(" %[^\n]",&str);
	char *p=replaceSpace(str);
	printf("%s",p);
}
char* replaceSpace(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='$';
		}
	i++;
	}
	return str;
}