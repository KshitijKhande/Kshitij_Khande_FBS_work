//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
#include<string.h>
char* largeString(char*,char*);
void main(){
	char str1[20],str2[20];
	printf("Enter the string 1: ");
	scanf("%s",&str1);
	printf("\nEnter the string 2: ");
	scanf("%s",&str2);
	char* p=largeString(str1,str2);
	printf("The largest string is : %s",p);
	
}
char* largeString(char* str1,char* str2){
	int i=0,j=0;
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	j++;
	if(i>j)
	return str1;
	else if(i==j)
	return "Both strings are equal";
	else
	return str2;
}

