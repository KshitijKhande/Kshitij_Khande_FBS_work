//mystrncmp//

#include<stdio.h>
int mystrncmp(char*,char*,int);
void main(){
	char str1[20]="Human";
	char str2[20]="Hum";
	int n=3;
	int p=mystrncmp(str1,str2,n);
	printf("%d",p);
}


int mystrncmp(char *str1,char *str2,int n){
	int i=0;
	while(i<n){
		if(str1[i]!=str2[i])
			return str1[i]-str2[i];
		if(str1[i]=='\0' || str2[i]=='\0')
			break;
		i++;
	}
}
