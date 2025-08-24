//5. WAP to Count the Number of Vowels in a String

#include<stdio.h>
#include<string.h>
int vowel(char*);
void main(){
	char str[20];
	printf("Enter the string: ");
	scanf("%s",&str);
	int p=vowel(str);
	printf(" There are %d vowels present in the input string.",p);
}
int vowel(char* str){
	int i=0,count=0;
	while(str[i]!='\0'){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			count++;
		}
	i++;
	}
	return count;
}