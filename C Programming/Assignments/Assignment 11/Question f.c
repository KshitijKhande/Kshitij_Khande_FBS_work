//mystrupper//

#include<stdio.h>
char* mystrupper(char*);
void main(){
	char str[20]="fireman";
	char *p=mystrupper(str);
	printf("%s",p);
}
char *mystrupper(char *str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&& str[i]<='z')
			str[i]=str[i]-32;
		i++;
	}
	return str;
}