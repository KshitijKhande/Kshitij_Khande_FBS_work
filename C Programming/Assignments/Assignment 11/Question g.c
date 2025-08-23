//mystrlower//

#include<stdio.h>
char* mystrlower(char*);
void main(){
	char str[20]="FIREMAN";
	char *p=mystrlower(str);
	printf("%s",p);
}
char *mystrlower(char *str){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='A'&& str[i]<='Z')
			str[i]=str[i]+32;
		i++;
	}
	return str;
}