//3. Write a program to find greatest of three numbers using nested if-else.//

#include<stdio.h>
int greatestnumber();
void main(){
	int res=greatestnumber();
	printf("%d is the greater number",res);
	}
      //main ends here//
int greatestnumber(){
	//int no1=13,no2=8,no3=7;
	int no1,no2,no3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&no1,&no2,&no3);
	if(no1>no2 && no2>no3){
		return no1;
	}
	else if(no1<no2 && no2>no3){
		return no2;
	}
	else if(no1<no2 && no2<no3){
		return no3;
	}
}  //function ends here//
