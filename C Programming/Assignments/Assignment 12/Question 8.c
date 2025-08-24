//8. WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
#include<string.h>
int words(char*);
void main(){
	char str[20];
	printf("Enter the string: ");
	gets(str);
//	int len = 0;
//    while (str[len] != '\0') {
//        if (str[len] == '\n') {
//            str[len] = '\0';
//            break;
//        }
//        len++;
//    }
	int p=words(str);
	printf("There are %d words present in the string.",p);
}
int words(char* str){
	int i=0,count=0,flag=0;
	while(str[i]!='\0'){
		if(str[i]!=' '){
			if(flag==0){
				count++;
				flag=1;
			}
		}else{
			flag=0;
		}
	i++;
	}
	return count;
}
