//mystrchr//

#include<stdio.h>
int mystrchr(char*,char);
void main(){
	char str1[20]="Hello";
	char c='H';
	int ptr=mystrchr(str1,c);
	if(ptr==-1)
	printf("Character not found");
	else
	printf("%c found at index %d",c,ptr);
	
	
}
int mystrchr(char *str1,char c){
	int i=0;
	while(str1[i]!='\0'){
		if(str1[i]==c){
			return i;
		}
		i++;
	}
	return -1;
	
}