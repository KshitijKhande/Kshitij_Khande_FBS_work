//2. WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
#include<string.h>
char* replace(char*);
void main(){
	char str[20];
	printf("Enter the string: ");
	scanf("%s",&str);
	char *p=replace(str);
	printf("%s",p);
}
char* replace(char* str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='a'){
			str[i]='$';
		}
	i++;
	}
	return str;
}