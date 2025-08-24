//4. WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include<stdio.h>
#include<string.h>
char* exchange(char*);
void main(){
	char str[10];
	printf("Enter the new string: ");
	gets(str);
	char* p=exchange(str);
	printf(" The string with first and last character exchanged is %s",p);
}
char* exchange(char* str){
	int i=0;
	while(str[i]!='\0')
	i++;
	if(i>1){
		char temp=str[0];
		str[0]=str[i-1];
		str[i-1]=temp;
	}
return str;
}