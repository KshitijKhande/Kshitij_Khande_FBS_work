//mystrncat//

#include<stdio.h>
char* mystrncat(char*,char*,int);
void main(){
	char str1[20]=" world";
	char str2[40]="hello";
	int n=3;
	char *p=mystrncat(str2,str1,n);
	printf("%s",p);
}
char* mystrncat(char *str2,char *str1,int n){
	int i=0,j=0;
	while(str2[i]!='\0'){
		i++;
	}
    while(j<n&&str1[j]!='\0'){
    	str2[i]=str1[j];
    	i++;
    	j++;
    }
    str2[i]='\0';
    return str2;
}