//mystrcmp//

#include<stdio.h>
int mystrcmp(char*,char*);
void main(){
	char str1[20]="Human";
	char str2[20]="man";
	int p=mystrcmp(str1,str2);
	printf("%d",p);
}


int mystrcmp(char *str1,char *str2){
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			return str1[i]-str2[i];
		}
		i++;
}
return str1[i]-str2[i];
}
