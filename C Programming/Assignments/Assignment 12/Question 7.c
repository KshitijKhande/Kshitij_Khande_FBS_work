//7. WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>
#include<string.h>
char* removeOddChar(char*);
void main(){
	char str[20];
	printf("Enter the string: ");
	scanf("%s",&str);
	char *p=removeOddChar(str);
	printf("%s",p);
}
char* removeOddChar(char* str){
	int i=0,j=0;
	while(str[i]!='\0'){
		if(i%2==0){
			str[j]=str[i];
			j++;
		}
	i++;
	}
	str[j]='\0';
	return str;
}