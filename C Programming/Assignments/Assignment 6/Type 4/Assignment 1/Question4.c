//4. Write a program to check whether a given character is a vowel or consonant.//

#include<stdio.h>
int vowel(char);
void main(){
	char ch='E';
	int res=vowel(ch);
	if(res)	
		printf("%c is a vowel",ch);
	else
		printf("%c is a consonent",ch);
}
int vowel(char ch){
	
	if(ch=='a' ||ch== 'e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
		return 1;
	else
		return 0;
}