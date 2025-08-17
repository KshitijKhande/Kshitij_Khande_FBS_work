//3. Write a program to find greatest of three numbers using nested if-else.//

#include<stdio.h>
void greatestnumber(int*,int*,int*);
void main(){
	int no1,no2,no3;
	int* p=&no1,q=&no2,s=&no3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&no1,&no2,&no3);
	greatestnumber(p,q,s);
	}
      //main ends here//
void greatestnumber(int* no1,int* no2,int* no3){
	//int no1=13,no2=8,no3=7;
	
	if(*no1>*no2 && *no2>*no3){
		printf("%d is the greater number",*no1);
	}
	else if(*no1<*no2 && *no2>*no3){
		printf("%d is the greater number",*no2);
	}
	else if(*no1<*no2 && *no2<*no3){
		printf("%d is the greater number",*no3);
	}
}  //function ends here//
