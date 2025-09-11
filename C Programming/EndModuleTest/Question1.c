//C end module test// SET-B
//Question 1 -Write a program to accept a string and calculate no of vowels,consonents,digits and spaces.//

#include<stdio.h>
void calculate(char*);
void main(){
	//char str[20]="Hello World";
	char str[100];
	printf("Enter the non empty string: ");
	gets(str);
	calculate(str);
}
void calculate(char* str){
		int vowels=0;
		int consonants=0;
		int spaces=0;
		int digits=0;
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='o' ||str[i]=='i' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ){
			vowels++;
		}
		if(str[i]==' '){
	    	spaces++;
		}
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
			consonants++;
		}
		if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'){
			digits++;
		}
	}
	printf("\nThe no of vowels in the given string are: %d",vowels);
	printf("\nThe no of consonants in the given string are: %d",consonants-vowels);
	printf("\nThe no of spaces in the given string are: %d",spaces);
	printf("\nThe no of digits in the given string are: %d",digits);


}


