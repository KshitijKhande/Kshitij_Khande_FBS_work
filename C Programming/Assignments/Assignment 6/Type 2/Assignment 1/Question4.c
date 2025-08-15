//4. Write a program to check whether a given character is a vowel or consonant.//

#include<stdio.h>
int vowel();
void main(){
	int res=vowel();
	if(res)
		printf("It is a vowel");	
	else
		printf("It is a consonent");
}
int vowel(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch=='a' ||ch== 'e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
		return 1;	
	else 
		return 0;
}