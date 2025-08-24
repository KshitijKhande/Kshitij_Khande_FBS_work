//10. Write a program to check the string is palindrome or not.

#include<stdio.h>
#include<string.h>
int stringPalindrome(char*);
void main(){
	char str[100];
	printf("Enter a non empty string: ");
	scanf("%s",str);
	int result=stringPalindrome(str);
	if(result)
		printf("The string is palindrome.");	
	else
		printf("The string is not palindrome.");
}
int stringPalindrome(char* str1){
	int i=0,j=strlen(str1)-1;
	while(i<j){
		if(str1[i]!=str1[j])
			return 0;
		i++;
		j--;
	}
	return 1;
	
}