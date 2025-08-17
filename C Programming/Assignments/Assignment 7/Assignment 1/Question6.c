//6. Write a program to check whether a given character is uppercase or lowercase.//

#include<stdio.h>
void chcase(char*);
void main(){
	char c;
	char* ptr;
	chcase(ptr);
}         //main ends here//
void chcase(char* c){

	printf("Enter the character:");
	scanf(" %c",&c);
	if(c>='A' && c<='Z'){
		printf(" The letter is uppercase");
	}else{
	
	printf("The character is lowercase");
}
}       //function ends here//