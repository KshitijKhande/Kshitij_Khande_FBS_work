//1. Write a program to scan string from user then scan a single character and search it in a accepted string.

#include<stdio.h>
#include<string.h>
int character(char*,char);
void main(){
	char str[20];
	char c;
	printf("Enter the string: ");
	scanf("%s",&str);
	printf("\nThe character you want to search: ");
	scanf(" %c",&c);
	int p=character(str,c);
	if(p==-1){
		printf("Character not found");
	}else{
		printf("%c found at index %d",c,p);
	}
	
}
int character(char *str,char c){
	int i=0;
	while(str[i]!='\0'){
		if(strlwr(str[i])==c)
			return i;
		i++;
	}
	return -1;
}