//6. Write a program to check whether a given character is uppercase or lowercase.//

#include<stdio.h>
char chcase();
void main(){
	char res=chcase();
	if(res>='A' && res<='Z')
		printf(" The letter is uppercase");
	else
		printf("The character is lowercase");
}         //main ends here//
char chcase(){
	char c;
	printf("Enter the character:");
	scanf(" %c",&c);
	return c;
}    //function ends here//