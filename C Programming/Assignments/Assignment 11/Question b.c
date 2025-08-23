//mystrlen()

#include<stdio.h>
int mystrlen(char*);
void main(){
	char str[]="Hello";
	int p=mystrlen(str);
	printf("The length of the string is %d",p);
}
int mystrlen(char *str){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}