//4. Write a program to check whether a given character is a vowel or consonant.//

#include<stdio.h>
void vowel(char);
void main(){
	char ch='E';
	vowel(ch);	
}
void vowel(char ch){
	
	if(ch=='a' ||ch== 'e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U'){
		printf("%c is a vowel",ch);
	}else{
		printf("%c is a consonent",ch);
	}
}