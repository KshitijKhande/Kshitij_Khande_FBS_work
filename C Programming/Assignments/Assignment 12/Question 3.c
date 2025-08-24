//3. WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* removeChar(char*,int);
void main(){
	char str1[20];
	int index;
	printf("Enter a non empty string: ");
	scanf("%s",&str1);
	printf("\nEnter the index of character you want to remove: ");
	scanf("%d",&index);
	char *p=removeChar(str1,index);
	printf("The string after removing character is %s",p);
	
	
}
char* removeChar(char *str,int index){
	int i=index;
	int len=strlen(str);
	if(index<0 || index>len){
		printf("\nInvalid index number entered.");
		return str;
	}
	while(i<len){
		str[i]=str[i+1];
		i++;
	}
	return str;
}