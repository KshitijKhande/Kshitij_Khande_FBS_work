//6. Write a program to check whether a given character is uppercase or lowercase.//

#include<stdio.h>
int chcase(char);
void main(){
	char c;
	printf("Enter the character: ");
	scanf(" %c",&c);
	int res=chcase(c);
	printf(res);
}         //main ends here//
int chcase(char c){
	if(c>='A' && c<='Z')
		return printf(" The letter is uppercase");
	else
		return printf("The character is lowercase");

}       //function ends here//