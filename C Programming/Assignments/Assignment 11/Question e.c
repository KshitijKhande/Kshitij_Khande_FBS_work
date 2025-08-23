//mystrncpy//

#include<stdio.h>
char* mystrcpy(char*,char*,int);
void main(){
	char str1[20]="Human";
	char str2[20];
	int n=2;
	char *p=mystrcpy(str1,str2,n);
	printf("%s",p);
}


char* mystrcpy(char *str1,char *str2 ,int n){
	int i=0;
	while(i<n){
		if(str1[i]!='\0'){
			str2[i]=str1[i];
			i++;
		}
	}
str2[i]='\0';
return str2;
}